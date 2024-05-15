/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:11:33 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 22:11:34 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
// {
//     Fixed a1 = b.getX() - a.getX();
//     Fixed b1 = c.getX() - a.getX();
//     Fixed c1 = point.getX() - a.getX();
//     Fixed a2 = b.getY() - a.getY();
//     Fixed b2 = c.getY() - a.getY();
//     Fixed c2 = point.getY() - a.getY();
//     Fixed a3 = (a1 * c2) - (a2 * c1);
//     Fixed b3 = (c1 * b2) - (b1 * c2);
//     Fixed c3 = (b1 * a2) - (a1 * b2);
//     Fixed d = (a3 * (a.getX() - point.getX())) + (b3 * (a.getY() - point.getY())) + (c3 * (a.getX() * point.getY() - a.getY() * point.getX()));
//     if (d > 0)
//         return false;
//     return true;
// }

Fixed getArea(Point const one, Point const two, Point const three)
{
    Fixed Area =  (((one.getX() * two.getY() + two.getX() * three.getY() + three.getX() * one.getY()) -
                    (one.getX() * three.getY() + three.getX() * two.getY() + two.getX() * one.getY())) / 2);
    
    if (Area < 0)
        Area = Area * -1;
    if (Area == 0)
        Area = -1;
    return Area;
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point) 
{
    Fixed totalArea = getArea(a, b, c);
    Fixed area1 = getArea(point, a, b);
    Fixed area2 = getArea(point, b, c);
    Fixed area3 = getArea(point, c, a);
    if (totalArea == (area1 + area2 + area3))
        return true;
    return false;
}
