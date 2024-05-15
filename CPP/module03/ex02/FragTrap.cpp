/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:11:09 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 20:21:10 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "FragTrap " << _name << " is created" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
    //std::cout << "Copy constructor FragTrap is called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &pointer)
{
    //std::cout << "Assignation operator FragTrap is called" << std::endl;
    this->_name = pointer._name;
    this->_hitPoints = pointer._hitPoints;
    this->_energyPoints = pointer._energyPoints;
    this->_attackDamage = pointer._attackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is asking for high fives" << std::endl;
}