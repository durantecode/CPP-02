/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:37:19 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/06 20:15:25 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixedPoint()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed& Fixed::operator = (Fixed const &toCopy)
{
	std::cout << "Assigment operator called" << std::endl;
	this->m_fixedPoint = toCopy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->m_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->m_fixedPoint = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}