/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:25:21 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:33:47 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace 
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
        
    public:
        Replace(std::string filename, std::string s1, std::string s2);
        ~Replace();
        void   findReplace();
};

#endif
