/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:55:43 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 21:32:07 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        Point();
        Point(const Point &copy);
        Point &operator = (const Point &pointer);
        ~Point();

        Point(Fixed const x, Fixed const y);

        Fixed getX(void) const;
        Fixed getY(void) const;

        Fixed setX(Fixed const x);
        Fixed setY(Fixed const y);

       bool bsp( Point const a, Point const b, Point const c, Point const point);  
};

#endif
