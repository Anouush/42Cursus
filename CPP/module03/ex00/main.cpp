/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:45:00 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/03 21:36:03 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Soldier");
    ClapTrap clapTrap2("Monster");

    clapTrap.info();

    clapTrap.attack("Troll");
    clapTrap.takeDamage(2);
    clapTrap.beRepaired(1);
    clapTrap.info();
    clapTrap = clapTrap2;
    clapTrap.info();
    clapTrap2.attack("Spider");
    clapTrap2.takeDamage(1);
    clapTrap2.beRepaired(1);
    clapTrap2.info();
    return (0);
}