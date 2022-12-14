/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dogs.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:49:39 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 09:18:09 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animals.hpp"
#include "Brains.hpp"


class Dog : public Animal
{
	private:
		Brain	*_dog_brain;

	public:
		Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog(void);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
		// void	setBrain(Brain &Brain);
};

#endif
