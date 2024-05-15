/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:48:33 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 19:56:23 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &pointer);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif