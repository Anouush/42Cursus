/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:27:56 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/08 20:27:57 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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