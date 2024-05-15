/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:27:51 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/08 20:27:52 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal type constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator = (const Animal &ptr)
{
    this->type = ptr.type;
    std::cout << "Animal assignment operator" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}