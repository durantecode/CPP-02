/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:36:29 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/06 20:13:23 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int m_fixedPoint;
		int static const m_bits = 8;
	
	public:
		Fixed();
		Fixed (const Fixed &toCopy);
		Fixed& operator = (Fixed const &toCopy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif