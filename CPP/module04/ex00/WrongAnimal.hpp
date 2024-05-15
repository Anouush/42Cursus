/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:28:22 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/08 20:28:23 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANILAM_HPP
#define WRONGANILAM_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        WrongAnimal &operator = (const WrongAnimal &ptr);

        std::string getType() const;
        void makeSound() const;
};

#endif