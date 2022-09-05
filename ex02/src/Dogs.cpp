/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dogs.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:56:06 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 11:28:07 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dogs.hpp"

Dog::Dog(void) : AAnimal("Dog")
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
	this->_type = src.getType();
	this->_dog_brain = new Brain(*src.getBrain());
	*this = src;
	cout
	<< "Dog copy constructor for "
	<< this->_type
	<< endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	if (this->_dog_brain)
		delete (this->_dog_brain);
	this->_dog_brain = new Brain(*rhs.getBrain());
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
