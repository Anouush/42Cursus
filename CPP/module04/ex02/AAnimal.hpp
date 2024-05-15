/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:41:23 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/14 20:41:24 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &copy);
        virtual ~AAnimal();
        AAnimal &operator = (const AAnimal &ptr);

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif