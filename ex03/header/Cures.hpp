/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cures.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:59:11 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 18:48:39 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMaterias.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & src);
		Cure & operator=(Cure const & rhs);
		~Cure(void);
		AMateria	*clone(void) const;
};

#endif
