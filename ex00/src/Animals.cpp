/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:24:16 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 22:00:03 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal(void) : _type("Animal")
{
	cout
	<< "Animal Default constructor for "
	<< this->_type
	<< endl;
}

Animal::~Animal(void)
{
	cout
	<< "Animal destuctor for "
	<< this->_type
	<< endl;
}

Animal::Animal(string const & src)
{
	this->_type = src;
	cout
	<< "Animal copy constructor for "
	<< this->_type
	<< endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	cout
	<< "Animal assignment operator for "
	<< this->_type
	<< endl;
	return (*this);
}

void	Animal::makeSound(void) const
{
	cout
	<< "Animal make sound from "
	<< this->_type
	<< endl;
}

string const &	Animal::getType(void) const
{
	return (this->_type);
}
