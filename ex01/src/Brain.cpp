/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:02:12 by steh              #+#    #+#             */
/*   Updated: 2022/09/04 22:52:23 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brains.hpp"

Brain::Brain(void)
{
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = "null";
	cout
	<< "Brain created but dont have any thought in 100 neurons"
	<< endl;
	cout
	<< "Brain Default constructor "
	<< endl;
}

Brain::~Brain()
{
	cout
	<< "Brain destuctor "
	<< endl;
}

Brain::Brain(Brain const & src)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = *new string;
		this->setIdeas(i, src.getIdeas(i));
	}
	// for (size_t i = 0; i < 100; i++)
	// 	this->setIdeas(i, src.getIdeas(i));
	cout
	<< "Brain copy constructor "
	<< endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = *new string;
		this->setIdeas(i, rhs.getIdeas(i));
	}
	// for (size_t i = 0; i < 100; i++)
	// 	this->setIdeas(i, rhs.getIdeas(i));
	cout
	<< "Brain assignment constructor "
	<< endl;
	return (*this);
}


void	Brain::setIdeas(size_t n, string idea)
{
	cout
	<< idea
	<< " is set into brain. Neuron number "
	<< n
	<< endl;
	this->_ideas[n] = idea;
}

string	Brain::getIdeas(size_t n) const
{
	cout
	<< "idea number "
	<< n
	<< " from brain is "
	<< this->_ideas[n]
	<< endl;
	return (this->_ideas[n]);
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		cout << "neuron " << i << ": " << this->_ideas[i] << endl;
}

