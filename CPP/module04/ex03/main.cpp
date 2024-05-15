/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:43:29 by angalsty          #+#    #+#             */
/*   Updated: 2024/05/15 21:29:06 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

void    leaks(void)
{
    system("leaks -q materia");
}

int main()
{
	atexit(leaks);
    {
		std::cout << "---------// Subject test //----------" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		std::cout << std::endl;
	}

	{
		std::cout << "---------// Subject test 2 //----------" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		std::cout << "--------// unequip //---------" << std::endl;
		me->unequip(1);
		
		me->unequip(5);
		std::cout << "--------// use materias //---------" << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << "--------// equip again //---------" << std::endl;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->use(0, *bob);
		delete bob;
		delete me;
		delete src;
		std::cout << std::endl;
	}

	{
		std::cout << "---------// Test 2 //----------" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		std::cout << std::endl;
		std::cout << "---------// create materias //-------- " << std::endl;
		AMateria *tmp;
		tmp = src->createMateria("ice");
		delete tmp;
		tmp = src->createMateria("ice");
		delete tmp;
		tmp = src->createMateria("fire");
		delete tmp;
		std::cout << std::endl;
		std::cout << "---------// src destructor //-------- " << std::endl;
		delete src;
	}
	std::cout << std::endl;
	
	return (0);
}