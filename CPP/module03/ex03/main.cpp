/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:48:37 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 20:18:41 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("DiamondTrap");
    diamondTrap.info();
    diamondTrap.attack("target");
    diamondTrap.takeDamage(10);
    diamondTrap.beRepaired(5);
    diamondTrap.info();
    diamondTrap.whoAmI();

    return (0);
}