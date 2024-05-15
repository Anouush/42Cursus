/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:41:19 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:41:20 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    this->type = type;
    std::cout << "AAnimal type constructor" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    *this = copy;
    std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal &AAnimal::operator = (const AAnimal &ptr)
{
    this->type = ptr.type;
    std::cout << "AAnimal assignment operator" << std::endl;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}