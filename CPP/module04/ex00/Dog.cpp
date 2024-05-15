/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:28:06 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:28:52 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog type contructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator = (const Dog &pointer)
{
    Animal::operator=(pointer);
    std::cout << "Dog assignation operator" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}