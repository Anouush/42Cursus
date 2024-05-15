/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:42:59 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 21:24:44 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "Character " << this->_name << " constructor called" << std::endl;
}

Character::Character(Character const &copy) : _name(copy._name)
{
    std::cout << this->_name << " copy constructor called" << std::endl;
    *this = copy;
}

Character::~Character()
{
    std::cout << this->_name << " destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

Character &Character:: operator=(Character const &pointer)
{
    //std::cout << this->_name << " assignation operator called" << std::endl;
    if (this != &pointer)
    {
        this->_name = pointer._name;
        for (int i = 0; i < 4; i++)
        {
            // if (this->_inventory[i])
            //     delete this->_inventory[i];
            this->_inventory[i] = pointer._inventory[i]->clone();
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character " << this->_name << " is equiped with " << m->getType() << std::endl;
            return ;
        }
        std::cout << "Character " << this->_name << " inventory is full" << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (this->_inventory[idx] && idx >= 0 && idx < 4)
       {
            delete this->_inventory[idx];
            this->_inventory[idx] = NULL;
            std::cout << "Character " << this->_name << " is unequiped" << std::endl;
       }
       else
            std::cout << "Character " << this->_name << " inventory is empty, can´t unequip" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}

