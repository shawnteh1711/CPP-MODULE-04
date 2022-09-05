/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:03:58 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 22:11:40 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMaterias.hpp"
#include <iostream>

// using std::string;
// using std::cout;
// using std::endl;

AMateria::AMateria(void) : _type("null")
{
	cout << "AMaterial default constructor" << endl;
}

AMateria::~AMateria(void)
{
	cout
	<< "AMaterial destructor for "
	<< this->_type
	<< endl;
}

AMateria::AMateria(AMateria const & src)
{
	// this->_type = src._type;
	*this = src;
	cout
	<< "AMaterial copy AMateria constructor for "
	<< this->_type
	<< endl;
}

AMateria::AMateria(string const & type) : _type(type)
{
	cout
	<< "AMaterial copy string constructor for "
	<< this->_type
	<< endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	cout
	<< "AMaterial copy constructor for "
	<< this->_type
	<< endl;
	return (*this);
}

string const	&AMateria::getType(void) const
{
	// cout << "Material type is " << this->_type << endl;
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	cout << "AMaterial used on " << target.getName() << endl;
}
