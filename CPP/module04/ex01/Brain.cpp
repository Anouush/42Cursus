/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:29:02 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/08 20:29:03 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain &Brain:: operator = (const Brain &ptr)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this == &ptr)
        return *this;
    for (int i = 0; i < 100; i++)
        ideas[i] = ptr.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

