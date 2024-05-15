/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:27:59 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:28:37 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat type constructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator = (const Cat &pointer)
{
    Animal::operator=(pointer);
    std::cout << "Cat assignation operator" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}