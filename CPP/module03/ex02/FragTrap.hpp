/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:11:14 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 19:53:21 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &pointer);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif