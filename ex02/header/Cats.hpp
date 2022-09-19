/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cats.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:39:13 by steh              #+#    #+#             */
/*   Updated: 2022/09/19 16:37:54 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimals.hpp"
#include "Brains.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_cat_brain;
	public:
		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		~Cat(void);
		
		void	makeSound(void) const;
		void	makeMeow(void) const
		{
			cout << "this is meow" << endl;
		}
		Brain	*getBrain(void) const;
		// void	setBrain(Brain &Brain);
		// Brain*	giveBrain( void ) const;
};

#endif
