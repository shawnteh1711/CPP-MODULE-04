/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Characters.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:13:30 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 20:31:18 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacters.hpp"
#include "AMaterias.hpp"

class Character: public ICharacter
{
	private:
		string		_name;
		AMateria	*_inv[4];
	public:
		Character(void);
		Character(string const & name);
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		~Character(void);

		string const	&getName(void) const;
		void			equip(AMateria* m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
};

#endif
