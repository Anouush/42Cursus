/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:43:06 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:43:07 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &copy): AMateria(copy)
{
    *this = copy;
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &pointer)
{
    //std::cout << this->_type << " assignation operator called" << std::endl;
    if (this != &pointer)
        this->_type = pointer._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    //std::cout << this->_type << " clone called" << std::endl;
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}