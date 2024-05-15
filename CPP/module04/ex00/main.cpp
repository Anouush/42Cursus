/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:28:14 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 19:30:39 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    leaks(void)
{
    system("leaks -q animal");
}

int main()
{
    std::cout << "---------------Test for Animal-----------------" << std::endl;
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
        delete j;
        delete i;
    }
    std::cout << "---------------Test for WrongAnimal-----------------" << std::endl;
    {
        const WrongAnimal *animal = new WrongAnimal();
        const WrongAnimal *cat = new WrongCat();

        std::cout << animal->getType() << " : Type Animal from pointer animal" << std::endl;
        std::cout << cat->getType() << " : Type Animal from pointer cat" << std::endl;
        animal->makeSound();
        cat->makeSound();
        delete  animal;
        delete  cat;
        std::cout << std::endl;
    }
    atexit(leaks);

    return 0;
}