/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cats.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:39:13 by steh              #+#    #+#             */
/*   Updated: 2022/09/19 07:48:57 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animals.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		~Cat(void);
		
		void	makeSound(void) const;
};

#endif
