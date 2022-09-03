/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:01:29 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 22:10:40 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
	protected:
		string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(string const & src);
		WrongAnimal & operator=(WrongAnimal const & rhs);
		~WrongAnimal(void);

		string const &	getType(void) const;
		void		makeSound(void) const;
};

#endif
