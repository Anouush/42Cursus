/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:22:19 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:22:20 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << _name << " is born" << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA " << _name << " is dead" << std::endl;
}
void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
