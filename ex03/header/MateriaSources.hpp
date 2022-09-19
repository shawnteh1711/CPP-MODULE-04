/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSources.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:34:55 by steh              #+#    #+#             */
/*   Updated: 2022/09/19 17:02:59 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAL_SOURCE_HPP
# define MATERIAL_SOURCE_HPP

#include "IMateriaSources.hpp"
#include <iostream>

using std::string;

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & rhs);
		~MateriaSource(void);

		void learnMateria(AMateria*m);
		AMateria* createMateria(string const & type);
};

#endif
