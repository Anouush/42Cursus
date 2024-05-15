/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:20:29 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:20:30 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie Zombie1("Scary");
    Zombie1.announce();
    Zombie* Zombie2 = newZombie("Brainy");
    Zombie2->announce();
    delete Zombie2;
    randomChump("Hungry");

    return (0);
}