/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dogs.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:56:06 by steh              #+#    #+#             */
/*   Updated: 2022/09/04 22:59:36 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dogs.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->_dog_brain = new Brain();
	cout
	<< "Dog Default constructor for "
	<< this->_type
	<< endl;
}

Dog::~Dog(void)
{
	delete this->_dog_brain;
	cout
	<< "Dog destuctor for "
	<< this->_type
	<< endl;
}

Dog::Dog(Dog const & src)
{
	// this->_dog_brain = new Brain();
	// this->_dog_brain = src.getBrain();
	// this->_x = *new int;
	// this->_x = src.getX();


	*this = src;
	cout
	<< "Dog copy constructor for "
	<< this->_type
	<< endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_x = *new int;
	this->_x = rhs.getX();
	// this->_type = rhs.getType();
	// this->_dog_brain = rhs.getBrain();
	cout
	<< "Dog assignment operator for "
	<< this->_type
	<< endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	cout
	<< "Dog make woof from "
	<< this->_type
	<< endl;
}

Brain	*Dog::getBrain(void) const
{
	cout
	<< "Dog return a brain from "
	<< this->_type
	<< endl;
	return (this->_dog_brain);
}

// void	Dog::setBrain(Brain &Brain)
// {
// 	this->_dog_brain = Brain;
// }

void	Dog::setX(int x)
{
	this->_x = x;
}

int		Dog::getX(void) const
{
	cout << "x=" << this->_x << endl;
	return (this->_x);
}

