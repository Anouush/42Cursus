/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:45:00 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/09 19:49:19 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap1("Skap1");
    ScavTrap clap2("Skap2");
    clap1.info();
    clap1.attack("objetive");
    clap1.takeDamage(1);
    clap1.beRepaired(1);
    clap1.info();
    clap1.guardGate();
    clap1 = clap2;
    clap2.info();
    clap2.attack("objetive");
    clap2.takeDamage(3);
    clap2.beRepaired(1);
    clap2.info();

    return (0);
}