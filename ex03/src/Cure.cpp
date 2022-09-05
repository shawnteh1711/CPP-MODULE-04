/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:05:43 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 21:56:23 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cures.hpp"

using std::cout;
using std::endl;

Cure::Cure(void) : AMateria("cure")
{
	cout 
	<< "Cure default constructor "
	<< this->_type
	<< endl;
}

Cure::~Cure(void)
{
	cout 
	<< "Cure destructor "
	<< this->_type
	<< endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	cout 
	<< "Cure copy constructor "
	<< this->_type
	<< endl;
	*this = src;
}

Cure & Cure::operator=(Cure const & rhs)
{
	this->_type = rhs._type;
	cout 
	<< "Cure assignment operator "
	<< this->_type
	<< endl;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*tmp;

	tmp = new Cure();
	return (tmp);
}
