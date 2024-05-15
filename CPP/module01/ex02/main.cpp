/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:22:13 by angalsty          #+#    #+#             */
/*   Updated: 2024/04/29 19:22:14 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    // Initialize a string variable
    std::string myString = "HI THIS IS BRAIN";
    // Create a pointer to the string
    std::string *myStringPTR = &myString;
    // Create a reference to the string
    std::string &myStringREF = myString;

    std::cout << "\nMemory addreses:" << std::endl;
    // Print the address of the string
    std::cout << "Address of the string: " << &myString << std::endl;
    // Print the address of the pointer
    std::cout << "Address of the pointer: " << myStringPTR << std::endl;
    // Print the address of the reference
    std::cout << "Address of the reference: " << &myStringREF << std::endl;

    std::cout << "\nValues:" << std::endl;
    // Print the value of the string
    std::cout << "Value of the string: " << myString << std::endl;
    // Print the value of the pointer
    std::cout << "Value of the pointer: " << *myStringPTR << std::endl;
    // Print the value of the reference
    std::cout << "Value of the reference: " << myStringREF << std::endl;

    return 0;
}