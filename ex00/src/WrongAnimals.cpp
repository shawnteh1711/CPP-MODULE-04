/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:24:16 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 22:10:18 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimals.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	cout
	<< "WrongAnimal Default constructor for "
	<< this->_type
	<< endl;
}

WrongAnimal::~WrongAnimal(void)
{
	cout
	<< "WrongAnimal destuctor for "
	<< this->_type
	<< endl;
}

WrongAnimal::WrongAnimal(string const & src)
{
	this->_type = src;
	cout
	<< "WrongAnimal copy constructor for "
	<< this->_type
	<< endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	cout
	<< "WrongAnimal assignment operator for "
	<< this->_type
	<< endl;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	cout
	<< "WrongAnimal make sound from "
	<< this->_type
	<< endl;
}

string const &	WrongAnimal::getType(void) const
{
	return (this->_type);
}
