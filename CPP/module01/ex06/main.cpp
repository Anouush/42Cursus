/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:23:47 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:24:45 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc == 2)
    {
        harl.complain(argv[1]);
    }
    else 
    {
        std::cout << "Wrong arguments" << std::endl;
        return 1;
    }

    return 0;
}
