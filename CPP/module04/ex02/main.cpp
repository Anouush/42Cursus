/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:41:54 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:49:49 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    leaks(void)
{
    system("leaks -q aanimal");
}

int main()
{
    atexit(leaks);

    std::cout << std::endl << "<-_-_-_- Test Subject -_-_-_->\n" << std::endl;
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        
        std::cout << i->getType() << "  : Type animal from pointer i " << std::endl;
        std::cout << j->getType() << " : Type animal from pointer j" << std::endl;

        i->makeSound(); //will output the cat sound!
        j->makeSound();
        
        delete j;//should not create a leak
        delete i;
    }

    std::cout << std::endl << "<-_-_-_- Test for Animals -_-_-_->\n" << std::endl;
    {
        const AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
        for (int i = 0; i < 4; i++)
            delete animals[i];
    }
    std::cout << std::endl;
    return 0; 
}