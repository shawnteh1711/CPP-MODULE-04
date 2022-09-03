/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCats.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:40:14 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 22:13:57 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCats.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	cout
	<< "WrongCat Default constructor for "
	<< this->_type
	<< endl;
}

WrongCat::~WrongCat(void)
{
	cout
	<< "WrongCat destuctor for "
	<< this->_type
	<< endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	this->_type = src.getType();
	cout
	<< "WrongCat copy constructor for "
	<< this->_type
	<< endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs.getType();
	cout
	<< "WrongCat assignment operator for "
	<< this->_type
	<< endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	cout
	<< "WrongCat make meow from "
	<< this->_type
	<< endl;
}
