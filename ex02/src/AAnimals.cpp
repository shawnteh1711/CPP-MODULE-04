/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimals.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:24:16 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 11:27:04 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimals.hpp"
#include "Brains.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	cout
	<< "AAnimal Default constructor for "
	<< this->_type
	<< endl;
}

AAnimal::~AAnimal(void)
{
	cout
	<< "AAnimal destuctor for "
	<< this->_type
	<< endl;
}

AAnimal::AAnimal(string const & src)
{
	this->_type = src;
	cout
	<< "AAnimal copy constructor for "
	<< this->_type
	<< endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->_type = rhs.getType();
	cout
	<< "AAnimal assignment operator for "
	<< this->_type
	<< endl;
	return (*this);
}

// void	AAnimal::makeSound(void) const
// {
// 	cout
// 	<< "AAnimal make sound from "
// 	<< this->_type
// 	<< endl;
// }

string const &	AAnimal::getType(void) const
{
	return (this->_type);
}
