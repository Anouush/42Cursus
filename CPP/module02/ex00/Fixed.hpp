/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:43:21 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:43:22 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif