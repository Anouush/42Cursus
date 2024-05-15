/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:22:28 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:22:33 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// void    leaks(void)
// {
//     system("leaks -q attack");
// }

int main()
{
    // Weapon type = Weapon("Pistol");
    // HumanA Dav = HumanA("Dav", type);
    // Dav.attack();
    // HumanB Bob = HumanB("Bob");
    // Bob.setWeapon(type);
    // Bob.attack();
   
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    //atexit(leaks);
    
    return 0;

}
