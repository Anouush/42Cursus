/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:28:58 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/08 20:28:59 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator = (const Animal &ptr);

        std::string getType() const;
        virtual void makeSound() const;
};

#endif