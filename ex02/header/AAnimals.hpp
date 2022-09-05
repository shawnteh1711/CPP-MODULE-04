/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimals.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:23:15 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 11:26:31 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brains.hpp"

using std::string;
using std::cout;
using std::endl;

class AAnimal
{
	protected:
		string	_type;

	public:
		AAnimal(void);
		AAnimal(string const & src);
		AAnimal & operator=(AAnimal const & rhs);
		virtual ~AAnimal(void);

		virtual void	makeSound(void) const = 0;
		string const &	getType(void) const;
		virtual Brain	*getBrain(void) const = 0; 
		// pure virtual function
		// A pure virtual function is implemented by classes 
		// which are derived from a Abstract class.

};

#endif
