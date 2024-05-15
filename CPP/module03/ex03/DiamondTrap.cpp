/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:48:49 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 20:33:22 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap " << this->_name << " is created" << std::endl;
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    *this = copy;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &pointer)
{
    this->_name = pointer._name;
    this->_hitPoints = pointer._hitPoints;
    this->_energyPoints = pointer._energyPoints;
    this->_attackDamage = pointer._attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << this->_name << " is destroyed" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->_name  << std::endl;
    std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}

