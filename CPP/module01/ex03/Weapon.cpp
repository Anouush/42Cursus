/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:22:43 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:22:44 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon " << _type << " is created" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon " << _type << " is destroyed" << std::endl;
}


const std::string &Weapon::getType() const
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
