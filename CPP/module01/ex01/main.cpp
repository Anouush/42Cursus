/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:21:38 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:21:39 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "Funny";
    Zombie* horde = zombieHorde(N, name);

    // for (int i = 0; i < N; i++)
    // {
    //     std::cout << "name of zombie" << std::endl;
	//     std::cin >> name;
	// 	horde[i].announce();
    // }

    for (int i = 0; i < N; i++)
    {
        std::cout << "Zombie " << i << " created" << std::endl;
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}