/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:43:18 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:43:19 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        Ice(Ice const &copy);
        Ice &operator=(Ice const &pointer);
        ~Ice();

        virtual AMateria* clone() const;
        virtual void use(ICharacter &target);
};

#endif