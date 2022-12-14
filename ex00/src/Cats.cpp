/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cats.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:40:14 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 22:12:39 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cats.hpp"

Cat::Cat(void) : Animal("Cat")
{
	cout
	<< "Cat Default constructor for "
	<< this->_type
	<< endl;
}

Cat::~Cat(void)
{
	cout
	<< "Cat destuctor for "
	<< this->_type
	<< endl;
}

Cat::Cat(Cat const & src)
{
	this->_type = src.getType();
	cout
	<< "Cat copy constructor for "
	<< this->_type
	<< endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	cout
	<< "Cat assignment operator for "
	<< this->_type
	<< endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	cout
	<< "Cat make meow from "
	<< this->_type
	<< endl;
}
