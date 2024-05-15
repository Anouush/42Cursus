/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:29:46 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:29:47 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};
        Zombie* newZombie(std::string name);
        void randomChump(std::string name);

#endif
