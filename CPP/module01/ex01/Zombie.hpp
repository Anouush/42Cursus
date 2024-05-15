/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:29:31 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:29:32 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
