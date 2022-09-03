/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCats.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:07:45 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 22:14:12 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimals.hpp"

using std::string;

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		WrongCat & operator=(WrongCat const & rhs);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
