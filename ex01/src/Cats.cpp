/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cats.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:40:14 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 10:56:35 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cats.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_cat_brain = new Brain();
	cout
	<< "Cat Default constructor for "
	<< this->_type
	<< endl;
}

Cat::~Cat(void)
{
	delete this->_cat_brain;
	cout
	<< "Cat destuctor for "
	<< this->_type
	<< endl;
}

Cat::Cat(Cat const & src)
{
	this->_type = src.getType();
	this->_cat_brain = new Brain(*src.getBrain());
	// *this = src;
	cout
	<< "Cat copy constructor for "
	<< this->_type
	<< endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	if (this->_cat_brain)
		delete (this->_cat_brain);
	this->_cat_brain = new Brain(*rhs.getBrain());
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

Brain	*Cat::getBrain(void) const
{
	cout
	<< "Cat return a brain from "
	<< this->_type
	<< endl;
	return (this->_cat_brain);
}

// void	Cat::setBrain(Brain &Brain)
// {
// 	this->_cat_brain = Brain;
// }
