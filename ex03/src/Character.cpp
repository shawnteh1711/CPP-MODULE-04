/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:53:30 by steh              #+#    #+#             */
/*   Updated: 2022/09/19 17:16:43 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Characters.hpp"

#define SIZE 4
Character::Character(void) : _name("no name yet")
{
	for (size_t i = 0; i < SIZE; i++)
		this->_inv[i] = NULL;
	for (size_t i = 0; i < SIZE; i++)
		this->_unequip[i] = NULL;
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
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_unequip[i])
			delete this->_unequip[i];
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
	for (size_t i = 0; i < SIZE; i++)
		this->_unequip[i] = NULL;
	cout
	<< "Character name constructor for "
	<< this->_name
	<< endl;
}

Character::Character(Character const & src)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		this->_inv[i] = src._inv[i]->clone();
	}
	*this = src;
	cout
	<< "Character copy constructor "
	<< this->_name
	<< endl;
}

Character & Character::operator=(Character const & rhs)
{
	// no change name for character
	cout
	<< "Character assignment operator for "
	<< this->_name
	<< endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_inv[i])
		{
			delete this->_inv[i];
			this->_inv[i] = NULL;
		}
		if (rhs._inv[i])
			this->_inv[i] = rhs._inv[i]->clone();
	}
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
	static int	i;
	
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
		cout
		<< this->_name
		<< " unequip "
		<< this->_inv[idx]->getType()
		<< " at slot "
		<< idx
		<< endl;
		if (i < SIZE)
		{
			this->_unequip[i] = this->_inv[idx];
			this->_inv[idx] = NULL;
			cout << "Material unequip: " << this->_unequip[i]->getType() << endl;
			i++;
		}
		else
		{
			cout << "Fail to unequip as floor full of materia. " << endl;
		}
		this->_inv[idx] = NULL;
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
		<< this->_name
		<< endl;
		return ;
	}
	cout
	<< this->_name
	<< ": ";
	this->_inv[idx]->use(target);
}
