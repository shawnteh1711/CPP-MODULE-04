/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:15:40 by steh              #+#    #+#             */
/*   Updated: 2022/09/04 22:58:25 by steh             ###   ########.fr       */
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
#include "Animals.hpp"
#include "Brains.hpp"
#include "Cats.hpp"
#include "Dogs.hpp"

#define NUM 4

int main(void)
{
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();

	// delete j;
	// delete i;

	Animal	*animals[NUM];
	Brain	*brain;
	// Brain	*brain2;
	// Brain	*brain3;

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
	// brain->printIdeas();

	// Animal	*a = animals[0];
	// brain2 = a->getBrain();
	// brain->setIdeas(2, "idea number 2");
	// brain2->printIdeas();


	// Animal *b;
	// b = animals[0];
	// brain3 = b->getBrain();
	// brain->setIdeas(3, "idea number 3");
	// brain3->printIdeas();

	for (size_t i = 0; i < NUM; i++)
		delete animals[i];

	// system("leaks program");


	// Compare deep copy
	// Dog	dog1, dog2;
	Dog	dog1;

	dog1.setX(5);
	dog1.getX();
	Dog	dog2 = dog1;
	// dog2 = dog1;
	dog2.getX();
	dog1.setX(10);
	dog1.getX();
	dog2.getX();

	// Dog	
	return (0);
}
