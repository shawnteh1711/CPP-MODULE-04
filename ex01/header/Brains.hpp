/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brains.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:57:53 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 23:28:01 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

using std::string;

class Brain
{
	private:
		string _ideas[100];
	public:
		Brain(void);
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		virtual ~Brain(void);

		string	*getIdeas(void) const;
};

#endif
