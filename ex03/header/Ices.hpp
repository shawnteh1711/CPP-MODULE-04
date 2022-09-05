/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ices.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:59:11 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 18:48:36 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMaterias.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const & src);
		Ice & operator=(Ice const & rhs);
		~Ice(void);
		AMateria	*clone(void) const;
};

#endif
