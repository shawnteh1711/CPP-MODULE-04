/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:23:15 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 23:30:26 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brains.hpp"

using std::string;
using std::cout;
using std::endl;

class Animal
{
	protected:
		string	_type;

	public:
		Animal(void);
		Animal(string const & src);
		Animal & operator=(Animal const & rhs);
		virtual ~Animal(void);

		virtual void	makeSound(void) const;
		string const &	getType(void) const;
};

#endif
