/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:05:43 by steh              #+#    #+#             */
/*   Updated: 2022/09/06 18:01:30 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ices.hpp"

using std::cout;
using std::endl;

Ice::Ice(void) : AMateria("ice")
{
	cout 
	<< "Ice default constructor "
	<< this->_type
	<< endl;
}

Ice::~Ice(void)
{
	cout 
	<< "Ice destructor "
	<< this->_type
	<< endl;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	cout 
	<< "Ice copy constructor "
	<< this->_type
	<< endl;
	*this = src;
}

Ice & Ice::operator=(Ice const & rhs)
{
	this->_type = rhs._type;
	cout 
	<< "Ice assignment operator "
	<< this->_type
	<< endl;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*tmp;

	tmp = new Ice();
	return (tmp);
}
