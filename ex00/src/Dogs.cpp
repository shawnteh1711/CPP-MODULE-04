/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dogs.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:56:06 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 21:57:11 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dogs.hpp"

Dog::Dog(void) : Animal("Dog")
{
	cout
	<< "Dog Default constructor for "
	<< this->_type
	<< endl;
}

Dog::~Dog(void)
{
	cout
	<< "Dog destuctor for "
	<< this->_type
	<< endl;
}

Dog::Dog(Dog const & src)
{
	this->_type = src.getType();
	cout
	<< "Dog copy constructor for "
	<< this->_type
	<< endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
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
