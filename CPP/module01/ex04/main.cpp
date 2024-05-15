/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:22:50 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:22:51 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int main(int argc, char **argv)
{
    if (argc == 4)
    {
        Replace replace(argv[1], argv[2], argv[3]);
    }
    else
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
    }
    return 0;
}