/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:00:41 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 21:35:32 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &pointer)
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this != &pointer)
        this->_value = pointer.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
   //std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator > (const Fixed &pointer) const
{
    return (this->_value > pointer.getRawBits());
}

bool Fixed::operator < (const Fixed &pointer) const
{
    return (this->_value < pointer.getRawBits());
}

bool Fixed::operator >= (const Fixed &pointer) const
{
    return (this->_value >= pointer.getRawBits());
}

bool Fixed::operator <= (const Fixed &pointer) const
{
    return (this->_value <= pointer.getRawBits());
}

bool Fixed::operator == (const Fixed &pointer) const
{
    return (this->_value == pointer.getRawBits());
}

bool Fixed::operator != (const Fixed &pointer) const
{
    return (this->_value != pointer.getRawBits());
}

Fixed Fixed::operator + (const Fixed &pointer) const
{
    return Fixed(this->toFloat() + pointer.toFloat());
}

Fixed Fixed::operator - (const Fixed &pointer) const
{
    return Fixed(this->toFloat() - pointer.toFloat());
}

Fixed Fixed::operator * (const Fixed &pointer) const
{
    return Fixed(this->toFloat() * pointer.toFloat());
}

Fixed Fixed::operator / (const Fixed &pointer) const
{
    return Fixed(this->toFloat() / pointer.toFloat());
}

Fixed &Fixed::operator ++ (void)
{
    this->_value++;
    return *this;
}  

Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}


Fixed &Fixed::operator -- (void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator -- (int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

Fixed::Fixed(const int value)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_value = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << _fractionalBits));
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_value >> _fractionalBits;
}

std::ostream &operator << (std::ostream &out, const Fixed &pointer)
{
    out << pointer.toFloat();
    return out;
}

