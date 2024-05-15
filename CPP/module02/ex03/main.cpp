/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:53:05 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/07 17:39:22 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(1, 1);
    Point b(10, 10);
    Point c(10, 0);
    Point point(0, 3);

    if (a.bsp(a, b, c, point)== true)
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is outside the triangle" << std::endl;
    return 0;

}