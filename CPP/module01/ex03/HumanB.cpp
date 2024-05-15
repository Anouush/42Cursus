/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:22:24 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:22:25 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB " << _name << " is born" << std::endl;
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << _name << " is dead" << std::endl;
}

void HumanB::attack()
{
    if (this->_weapon)
        std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
