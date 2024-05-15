/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:42:47 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:45:24 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
    std::cout << "AMateria " << this->_type << "constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria " << this->_type << " constructor called" << std::endl;
}

AMateria:: AMateria(AMateria const &copy) : _type(copy._type)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria:: operator = (AMateria const &pointer)
{
    //std::cout << "AMateria assignation operator called" << std::endl;
    if (this != &pointer)
        this->_type = pointer._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << this->_type << " use called on " << target.getName() << std::endl;
}




