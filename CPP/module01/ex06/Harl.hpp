/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:24:26 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:24:40 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

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

#endif
