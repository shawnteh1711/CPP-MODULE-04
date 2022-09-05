/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:53:30 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 22:10:09 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Characters.hpp"

#define SIZE 4
Character::Character(void) : _name("no name yet")
{
	for (size_t i = 0; i < SIZE; i++)
		this->_inv[i] = NULL;
	cout
	<< "Character default constructor for "
	<< this->_name
	<< endl;
}

Character::~Character(void)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
	}
	cout
	<< "Character destructor for "
	<< this->_name
	<< endl;

}

Character::Character(string const & name) : _name(name)
{
	for (size_t i = 0; i < SIZE; i++)
		this->_inv[i] = NULL;
	cout
	<< "Character name constructor for "
	<< this->_name
	<< endl;
}

Character::Character(Character const & src)
{
	*this = src;
	cout
	<< "Character copy constructor "
	<< this->_name
	<< endl;
}

Character & Character::operator=(Character const & rhs)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		this->_inv[i] = rhs._inv[i];
	}
	this->_name = rhs._name;
	cout
	<< "Character assignment operator for "
	<< this->_name
	<< endl;
	return (*this);
}

string	const & Character::getName(void) const
{
	// cout
	// << "Character name is "
	// << this->_name
	// << endl;
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	static int	i;

	if (!m)
	{
		cout
		<< this->_name
		<< " fail to equip materia "
		<< endl;
		return ;
	}
	while (i < SIZE)
	{
		if (!this->_inv[i])
		{
			this->_inv[i] = m;
			cout 
			<< this->_name
			<< " equipped materia "
			<< m->getType()
			<< " in slot "
			<< i
			<< endl;
			break ;
		}
		i++;
	}
	if (i >= 4)
	{
		cout 
		<< this->_name 
		<< " can't equip more than 4 materia"
		<< endl;
		return ;
	}
	

}

void	Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		cout 
		<< "Non-existing slot: "
		<< idx
		<< endl;
	}
	else if (!this->_inv[idx])
	{
		cout 
		<< "Empty inventory slot: "
		<< idx
		<< endl;
	}
	else
	{
		this->_inv[idx] = NULL;
		cout
		<< this->_name
		<< " unequip "
		<< this->_inv[idx]->getType()
		<< " at slot "
		<< idx
		<< endl;
	}


}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0 || !(this->_inv)[idx])
	{
		cout 
		<< "Non-existing slot: "
		<< idx
		<< " by "
		<< target.getName()
		<< endl;
		return ;
	}
	this->_inv[idx]->use(target);
	cout
	<< this->_name
	<< " use "
	<< this->_inv[idx]->getType()
	<< " on "
	<< target.getName()
	<< endl;
}
