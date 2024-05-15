/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:51:16 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 19:53:00 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "ClapTrap " << _name << " is created" << std::endl;
    this->_name = _name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0; 
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor ClapTrap is called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &pointer)
{
    std::cout << "Assignation operator ClapTrap is called" << std::endl;
    this->_name = pointer._name;
    this->_hitPoints = pointer._hitPoints;
    this->_energyPoints = pointer._energyPoints;
    this->_attackDamage = pointer._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0) 
    {
            std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
            this->_hitPoints -= amount;
        } 
        else 
        {
            std::cout << "ClapTrap " << this->_name << " is destroyed and cannot take any more damage!" << std::endl;
            return ;
        }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired!" << std::endl;
    }
    else
    {
        if  (this->_energyPoints > 0) 
        {
                std::cout << "ClapTrap " << this->_name << " is repaired and gains " << amount << " hit points!" << std::endl;
                this->_hitPoints += amount;
                this->_energyPoints--;
        } 
        else 
        {
            std::cout << "ClapTrap " << this->_name << " is out of energy and cannot be repaired!" << std::endl;
        }   
    }
}

void ClapTrap::info()
{
    std::cout << "-------------INFO-----------------" << std::endl;
    std::cout << "Name:          " << this->_name << std::endl;
    std::cout << "Attack points: " << this->_attackDamage << std::endl;
    std::cout << "Hit points:    " << this->_hitPoints << std::endl;
    std::cout << "Energy points: " << this->_energyPoints << std::endl;
    std::cout << "----------------------------------" << std::endl;
}