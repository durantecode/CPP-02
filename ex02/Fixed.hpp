/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:36:29 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/18 21:59:13 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int m_fixedPoint;
		int static const m_bits = 8;
	
	public:
		Fixed();
		Fixed (const Fixed &toCopy);
		Fixed (int const value);
		Fixed (float const value);
		Fixed& operator = (Fixed const &toCopy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	
		bool operator > (Fixed const &compare) const;
		bool operator < (Fixed const &compare) const;
		bool operator >= (Fixed const &compare) const;
		bool operator <= (Fixed const &compare) const;
		bool operator == (Fixed const &compare) const;
		bool operator != (Fixed const &compare) const;
	
		Fixed operator + (Fixed const &operation);
		Fixed operator - (Fixed const &operation);
		Fixed operator * (Fixed const &operation);
		Fixed operator / (Fixed const &operation);
	
		Fixed& operator ++ (void);
		Fixed& operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);

		static Fixed& max(Fixed &a, Fixed &b);
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		static const Fixed& min(Fixed const &a, Fixed const &b);
};

std::ostream &operator << (std::ostream &out, Fixed const &fixed);

#endif
