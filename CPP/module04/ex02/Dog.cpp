/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:41:46 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:37:00 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog type contructor" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
    //std::cout << "Dog copy constructor" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator = (const Dog &pointer)
{
    AAnimal::operator=(pointer);
    //std::cout << "Dog assignation operator" << std::endl;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*pointer.brain);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

