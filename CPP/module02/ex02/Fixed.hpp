/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:43:52 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 20:08:42 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator = (const Fixed &pointer);
        ~Fixed();

        bool operator > (const Fixed &pointer) const;
        bool operator < (const Fixed &pointer) const;
        bool operator >= (const Fixed &pointer) const;
        bool operator <= (const Fixed &pointer) const;
        bool operator == (const Fixed &pointer) const;
        bool operator != (const Fixed &pointer) const;

        Fixed operator + (const Fixed &pointer) const;
        Fixed operator - (const Fixed &pointer) const;
        Fixed operator * (const Fixed &pointer) const;
        Fixed operator / (const Fixed &pointer) const;

        Fixed &operator ++ (void); // prefix-preincrement
        Fixed operator ++ (int); // postfix-postincrement
        Fixed &operator -- (void); // prefix-predecrement
        Fixed operator -- (int); // postfix-postdecrement

        static Fixed &min(Fixed &a, Fixed &b); 
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        Fixed(const int value);
        Fixed(const float value);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &pointer);

#endif