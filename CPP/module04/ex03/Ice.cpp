/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:43:14 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:43:15 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
    *this = copy;
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &pointer)
{
    //std::cout << "Ice assignation operator called" << std::endl;
    if (this != &pointer)
        this->_type = pointer._type;
    return (*this);
}

AMateria* Ice::clone() const
{
    //std::cout << "Ice clone called" << std::endl;
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
