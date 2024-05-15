/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:42:14 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:42:15 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << type << " default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << type << " type constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &ptr)
{
    this->type = ptr.type;
    std::cout << "WrongAnimal assignment operator" << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sound" << std::endl;
}
