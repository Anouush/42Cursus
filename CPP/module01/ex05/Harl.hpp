/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:24:51 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:24:58 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
#include <string>

class Harl 
{
    private:
        void debug();
        void info();
        void warning();
        void error();

    public:
        Harl();
        ~Harl();
        
        void complain(std::string level);
};

typedef void (Harl::*fptr)();

#endif
