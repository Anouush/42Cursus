/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:29:22 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:50:47 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    leaks(void)
{
    system("leaks -q brain");
}

int main()
{
    atexit(leaks);

    std::cout << std::endl << "<-_-_-_- Test Subject -_-_-_->\n" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << meta->getType() << " : Type animal from pointer meta" << std::endl;
        std::cout << i->getType() << "  : Type animal from pointer i " << std::endl;
        std::cout << j->getType() << " : Type animal from pointer j" << std::endl;

        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;//should not create a leak
        delete i;
    }

    std::cout << std::endl << "<-_-_-_- Test for Animals -_-_-_->\n" << std::endl;
    {
        const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
        for (int i = 0; i < 4; i++)
            delete animals[i];
    }
    std::cout << std::endl;
    
    return 0; 
}