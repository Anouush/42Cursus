/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:29:08 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:32:23 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat type constructor" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    //std::cout << "Cat copy constructor" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator = (const Cat &pointer)
{
    Animal::operator=(pointer);
    //std::cout << "Cat assignation operator" << std::endl;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*pointer.brain);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}