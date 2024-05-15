/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:48:44 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 20:29:09 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIMONDTRAP_HPP
#define DIMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
        
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator=(const DiamondTrap &pointer);
        ~DiamondTrap();
        
        void attack(std::string const &target);
        void whoAmI();   
};

#endif