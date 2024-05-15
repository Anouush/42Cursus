/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:25:28 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:25:29 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon 
{
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string &getType() const;
        void setType(std::string type);
};

#endif