/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMaterias.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:54:18 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 21:04:21 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIAL_HPP
# define AMATERIAL_HPP

#include <iostream>
#include "ICharacters.hpp"

using std::string;
using std::cout;
using std::endl;

class	ICharacter;

class AMateria
{
	protected:
		string	_type;
	public:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & rhs);

		AMateria(string const & type);
		string const		&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter & target);
};

#endif
