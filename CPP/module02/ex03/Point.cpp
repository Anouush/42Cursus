/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:02:07 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/07 17:39:40 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY())
{
    *this = copy;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
    std::cout << "Point: Constructor set x y called" << std::endl;
}

Point &Point::operator = (const Point &pointer)
{
    if (this != &pointer)
    {
       this->setX(pointer.getX());
       this->setY(pointer.getY());
    }
    return *this;
}

Point::~Point()
{
}

Fixed Point::getX(void) const
{
    return this->_x;
}

Fixed Point::getY(void) const
{
    return this->_y;
}

Fixed Point::setX(Fixed const x)
{
    (Fixed)this->_x = x;
    return this->_x;
}

Fixed Point::setY(Fixed const y)
{
    (Fixed)this->_y = y;
    return this->_y;
}

