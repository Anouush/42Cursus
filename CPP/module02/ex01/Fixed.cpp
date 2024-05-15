/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:43:32 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:45:47 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_fractionalBits;
}
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << _fractionalBits));
}

Fixed &Fixed::operator = (const Fixed &pointer)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->_value = pointer.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat( void ) const
{
    return (float)this->_value / (1 << _fractionalBits);
}

int32_t Fixed::toInt( void ) const
{
    return this->_value >> this->_fractionalBits;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}