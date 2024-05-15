/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:23:03 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:33:25 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
    findReplace();
}

Replace::~Replace()
{
}

void   Replace::findReplace()
{
    std::ifstream file(_filename);
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file" << std::endl;
        return ;
    }
    std::ofstream new_file(_filename + ".replace");
    std::string content;
    std::size_t pos;
    std::size_t len;

    std::getline(file, content, '\0');
    len = _s1.length();
    pos = content.find(_s1);

    while (pos >= 0 && pos < content.length())
    {
        content.erase(pos, len);
        content.insert(pos, _s2);
        pos = content.find(_s1, pos + _s2.length());
    }
    new_file << content;
    file.close();
    new_file.close();
}