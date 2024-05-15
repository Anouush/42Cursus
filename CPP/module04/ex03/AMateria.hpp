/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:42:53 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:42:54 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter; //Forward declaration

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &copy);
        AMateria &operator=(AMateria const  &pointer);
        virtual ~AMateria();

        std::string const & getType() const; //Returns the materia type
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif