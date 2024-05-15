/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:26:50 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:28:50 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();    
};

#endif
