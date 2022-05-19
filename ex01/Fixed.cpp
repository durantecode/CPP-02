/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:37:19 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/19 12:14:11 by ldurante         ###   ########.fr       */
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

Fixed &Fixed::operator = (Fixed const &toCopy)
{
	std::cout << "Assigment operator called" << std::endl;
	this->m_fixedPoint = toCopy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->m_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->m_fixedPoint = raw;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->m_fixedPoint = value << this->m_bits;
}

/* 1 << bits is used instead of pow(2, m_bits) because we are only
allowed to use roundf function (just in case)
The bitwise << moves m_bits position to de left in binary, it's the equivalent
to 2^m_bits */

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->m_fixedPoint = roundf(value * (1 << this->m_bits));
}

float Fixed::toFloat(void) const
{
	return ((double)this->m_fixedPoint / (double)(1 << this->m_bits));
}

int Fixed::toInt(void) const
{
	return (this->m_fixedPoint >> this->m_bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
