/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:11:19 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/04 21:11:20 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap clap1("Frag1");
    FragTrap clap2("Frag2");
    clap1.info();

    clap1.attack("objetive");
    clap1.takeDamage(1);
    clap1.beRepaired(1);
    clap1.info();
    clap1.highFivesGuys();
    clap1 = clap2;
    clap2.info();
    clap2.attack("objetive");
    clap2.takeDamage(3);
    clap2.beRepaired(1);
    clap2.info();

    return (0);
}