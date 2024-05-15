/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:23:26 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:23:27 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    int i = 1;

    if (i == argc)
    {
        std::cout << "No arguments" << std::endl;
        return 0;
    }
    if (argc > 2)
    {
        std::cout << "Too many arguments" << std::endl;
        return 1;
    }
    while (i < argc)
    {
        harl.complain(argv[i]);
        i++;
    }

    return 0;
}
