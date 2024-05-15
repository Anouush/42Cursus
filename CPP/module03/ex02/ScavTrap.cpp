/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:11:24 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 19:54:36 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    std::cout << "ScavTrap " << name << " is created" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    //std::cout << "Copy constructor ScavTrap is called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &pointer)
{
    //std::cout << "Assignation operator ScavTrap is called" << std::endl;
    this->_name = pointer._name;
    this->_hitPoints = pointer._hitPoints;
    this->_energyPoints = pointer._energyPoints;
    this->_attackDamage = pointer._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap is destroyed" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    if (this->_energyPoints > 0) 
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    } 
    else 
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot attack!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}
