/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:15:40 by steh              #+#    #+#             */
/*   Updated: 2022/09/03 23:27:48 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reference : https://github.com/Ysoroko/cpp_module_04/blob/master/ex01/main.cpp
// Shallow copy:
// ----------------------------------------
// A ---> [heap adress of a member] <--- B
// ----------------------------------------
// If the value inside the address is modified at any point, the value will be
// modified both in A and B since they both point to the same location in memory
// This is a bad idea. If any variables were allocated on the heap -> deep copy!

// Deep copy:
// -----------------------------------------------------------------
// A ---> [heap adress of a member] B ---> [heap adress of a member]
// -----------------------------------------------------------------
// Despite having the same values each object has its own allocated memory
// for its member variables

int main(void)
{
	/* code */
	return 0;
}
