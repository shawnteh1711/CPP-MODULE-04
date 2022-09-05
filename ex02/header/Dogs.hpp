/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dogs.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:49:39 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 11:27:43 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimals.hpp"
#include "Brains.hpp"


class Dog : public AAnimal
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
