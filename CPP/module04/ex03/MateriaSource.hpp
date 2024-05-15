/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:43:42 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:50:39 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materias[4];
       
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &copy);
        MateriaSource &operator=(MateriaSource const &pointer);
        ~MateriaSource();

        void learnMateria(AMateria *materia);
        AMateria* createMateria(std::string const &type);
        AMateria* getMateria(std::string const &type);
};

#endif