/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:41:40 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:36:43 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat type constructor" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
    //std::cout << "Cat copy constructor" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator = (const Cat &pointer)
{
    AAnimal::operator=(pointer);
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