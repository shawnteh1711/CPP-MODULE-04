/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brains.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:57:53 by steh              #+#    #+#             */
/*   Updated: 2022/09/04 21:22:04 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <iomanip> // std:setw

using std::string;
using std::cout;
using std::endl;
using std::setw;

class Brain
{
	private:
		string _ideas[100];
	public:
		Brain(void);
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		virtual ~Brain(void);

		void	setIdeas(size_t n, string idea);
		string	getIdeas(size_t n) const;
		void	printIdeas(void) const;
};

#endif
