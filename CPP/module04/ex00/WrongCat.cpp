/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:28:25 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:29:19 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    WrongAnimal::type = "WrongCat";
    std::cout << "WrongCat type contructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    this->type = copy.type;
    WrongAnimal::type = copy.type;
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &pointer)
{
    this->type = pointer.type;
    WrongAnimal::type = pointer.type;
    std::cout << "WrongCat assignation operator" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow" << std::endl;
}
