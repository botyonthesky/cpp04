/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:52:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/13 14:34:06 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

int main()
{

    // Dog a;
    // Dog b(a);

    // b = a;
    // a->makeSound();
    // b->makeSound();
    
    const Animal*  Animals[100];

    for (int i = 0; i < 50; i++)
        Animals[i] = new Dog();
    for (int i = 50; i < 100; i++)
        Animals[i] = new Cat();
    
    
    
    
    for (int i = 0; i < 100; i++)
        delete Animals[i];
        
    return (0);
}