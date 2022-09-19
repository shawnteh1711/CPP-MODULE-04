/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:15:40 by steh              #+#    #+#             */
/*   Updated: 2022/09/19 16:17:38 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reference : https://github.com/Ysoroko/cpp_module_04/blob/master/ex01/main.cpp
// Shallow copy:
// ----------------------------------------
// A ---> [heap adress of a member] <--- B
// ----------------------------------------
// If the value inside the address is modified at any point, the value will be
// modified both in A and B since they both point to the same location in memory
// This is a bad idea. If any variables were allocated on the heap -> deep copy!

// Deep copy:
// -----------------------------------------------------------------
// A ---> [heap adress of a member] B ---> [heap adress of a member]
// -----------------------------------------------------------------
// Despite having the same values each object has its own allocated memory
// for its member variables
#include "../header/Animals.hpp"
#include "../header/Brains.hpp"
#include "../header/Cats.hpp"
#include "../header/Dogs.hpp"

#define NUM 4

void	test1(void);
void	test2(void);
void	test3(void);
void	test4(void);

int main(void)
{
	// test1();
	// test2();
	test3();
	// test4();
	// system("leaks program");
	return (0);
}


void	test1(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;
}

void	test2(void)
{
	Animal	*animals[NUM];
	Brain	*brain;

	for (size_t i = 0; i < NUM; i++)
	{
		if (i < NUM / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		cout << animals[i]->getType() << endl;
	}
	
	animals[0]->makeSound();
	animals[3]->makeSound();
	brain = animals[0]->getBrain();
	brain->setIdeas(0, "idea number 0");
	brain->setIdeas(1, "idea number 1");
	brain->printIdeas();

	for (size_t i = 0; i < NUM; i++)
		delete animals[i];
}

void	test3(void)
{
	// Compare deep copy
	Dog	dogA;
	dogA.getBrain()->setIdeas(0, "first idea from dogA.");
	dogA.getBrain()->setIdeas(2, "third idea from dogA.");

	Dog	dogB = dogA;
	dogB.getBrain()->getIdeas(0);
	dogA.getBrain()->setIdeas(1, "second idea from dogA.");
	
	dogA.getBrain()->printIdeas();
	dogB.getBrain()->printIdeas();
}

void	test4(void)
{
	// Compare deep copy
	Cat	catA, catB;
	catA.getBrain()->setIdeas(0, "first idea from catA.");

	catB = catA;
	catB.getBrain()->getIdeas(0);
	catA.getBrain()->setIdeas(1, "second idea from catA.");
	cout << "Cat B still only have first idea form catA" << endl;
	catB.getBrain()->printIdeas();
	cout << "Cat A have both ideas from catA" << endl;
	catA.getBrain()->printIdeas();
}
