/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:43:10 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:43:11 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & copy);
        Cure &operator=(Cure const &pointer);
        ~Cure();

        virtual AMateria* clone() const;
        virtual void use(ICharacter &target);
};

#endif