/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:20:12 by steh              #+#    #+#             */
/*   Updated: 2022/09/19 08:28:40 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMaterias.hpp"
#include "MateriaSources.hpp"
#include "Ices.hpp"
#include "Cures.hpp"
#include "Characters.hpp"

void	test1(void);
void	test2(void);
void	test3(void);

int main(void)
{
	test1();
	// test2();
	// test3();
	// system("leaks program");
	return (0);
}

void	test1(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete (bob);
	delete (me);
	delete (src);
}

void	test2(void)
{
	// test copy
	AMateria *a = new Ice();
	AMateria *b = a->clone();
	AMateria *c = b;
	AMateria *d = new Cure();
	AMateria *e(d);

	cout << a->getType() << endl;
	cout << b->getType() << endl;
	cout << c->getType() << endl;
	cout << d->getType() << endl;
	cout << e->getType() << endl;
	delete (a);
	delete (b);
	delete (d);
}

void	test3(void)
{
	// test equip more than 4 
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice()); // No more slot

	// test if character equip unknown materia
	// ICharacter* characterA = new Character("characterA");
	Character* characterA = new Character("characterA");
	AMateria* tmp;
	
	tmp = src->createMateria("xxx"); // Material source unknown
	delete (tmp);
	tmp = src->createMateria("cure");
	characterA->equip(tmp);
	characterA->use(0, *characterA);

	// copy charater A to B seem like cannot use interface to copy
	// ICharacter* characterB = new Character("characterB");
	Character* characterB = new Character("characterB");
	*characterB = *characterA;
	characterB->use(0, *characterB);
	tmp = src->createMateria("ice");
	characterB->equip(tmp);
	characterA->use(1, *characterB); // non existing slot in Character A character has slot 0 materia
	characterB->use(1, *characterA);
	characterB->unequip(1);
	characterB->use(1, *characterA); // non existing slot after unequip
	delete (characterB);
	delete (characterA);
	delete (src);
}
