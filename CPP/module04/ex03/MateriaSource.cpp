/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:43:38 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:43:39 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy) : _materias()
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = copy;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete _materias[i];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &pointer)
{
    if (this != &pointer)
    {
        for (int i = 0; i < 4; i++)
        {
            _materias[i] = pointer._materias[i];
        }
    }
    return (*this);
}

AMateria *MateriaSource::getMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] && _materias[i]->getType() == type)
            return (_materias[i]);
    }
    return (NULL);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] == NULL)
        {
            _materias[i] = materia;
            std::cout << "MateriaSource slot " << i <<  ":" << materia->getType() << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource is full" << std::endl;
    delete materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] && _materias[i]->getType() == type)
            return (_materias[i]->clone());
    }
    return (NULL);
}

