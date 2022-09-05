/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSources.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:25:31 by steh              #+#    #+#             */
/*   Updated: 2022/09/05 13:30:28 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIAL_SOURCE_HPP
# define IMATERIAL_SOURCE_HPP

#include "AMaterias.hpp"
#include <iostream>

using std::string;

class AMateria;

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(string const & type) = 0;
};

#endif
