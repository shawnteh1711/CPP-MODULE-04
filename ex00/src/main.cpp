/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:15:01 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 23:01:16 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Cats.hpp"
#include "Dogs.hpp"
#include "WrongAnimals.hpp"
#include "WrongCats.hpp"

# define RED    "\033[31m"
# define DEF    "\033[0m"

int main(void)
{
	cout << "Test animal" << endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // print cat sound
	j->makeSound();
	meta->makeSound();

	delete (i);
	delete (j);
	delete (meta);
	
	cout << endl;
	cout << "Test wrong animal" << endl;

	const WrongAnimal* a = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();
	const WrongCat* c = new WrongCat();
	// const WrongCat* d = new WrongAnimal();
	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	a->makeSound();
	b->makeSound(); // wrong sound from wrong animal
	c->makeSound();

	delete (c);
	delete (b);
	delete (a);
	return (0);
}
