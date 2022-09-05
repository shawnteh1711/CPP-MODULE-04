/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:08:52 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 21:56:50 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSources.hpp"

#define SIZE 4

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < SIZE; i++)
		this->_materias[i] = NULL;	
	cout << "Material Source default constructor" << endl;
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	cout << "Material Source destructor" << endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	cout << "Material Source copy constructor" << endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (rhs._materias[i])
			this->_materias[i] = rhs._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	cout << "Material Source assignment operator" << endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria*m)
{
	static int i;

	if (i < SIZE)
	{
		this->_materias[i] = m;
		i++;
		cout << "Material learned: " << m->getType() << endl;
	}
	else
	{
		cout << "No slot left." << m << endl;
	}
}

AMateria* MateriaSource::createMateria(string const & type)
{
	for (size_t i = 0; i < SIZE && this->_materias[i]; i++)
	{
		if (this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	cout << "Material source unknown" << endl;
	return (NULL);
}
