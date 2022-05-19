/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:56 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/19 00:28:57 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* A fixed-point number is a representation of a real number
using a certain number of bits of a type for the integer part,
and the remaining bits of the type for the fractional part.
The number of bits representing each part is fixed (hence the name, fixed-point).
An integer type is usually used to store fixed-point values. */

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}
