/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:41:49 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:36:52 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *brain;
        
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator = (const Dog &pointer);
        ~Dog();
        
        void makeSound() const;
};

#endif