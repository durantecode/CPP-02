/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:56 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/19 14:28:19 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed c(10);
	Fixed d(5);

	std::cout << "----------- BASIC OPERATIONS ---------" << std::endl;
	std::cout << "TRUE: " << (c > d) << std::endl;
	std::cout << "FALSE: " << (c < d) << std::endl;

	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	std::cout << c * d << std::endl;
	std::cout << c / d << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "----------- OPERATOR OVERLOAD ---------" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "MAX: " << Fixed::max( a, b ) << std::endl;
	std::cout << "MIN: " << Fixed::min( a, b ) << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;

	return (0);
}
