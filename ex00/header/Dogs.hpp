/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dogs.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:49:39 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 21:43:32 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animals.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog(void);

		void	makeSound(void) const;
};

#endif
