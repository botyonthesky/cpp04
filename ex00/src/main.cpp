/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:33 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 13:59:20 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

int main()
{    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the Cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();
    std::cout << i2->getType() << " " << std::endl;
    i2->makeSound();
    meta2->makeSound();
    
   
    // delete meta;
    // delete i;
    // delete j;
    // delete meta2;
    // delete i2;
    // delete j2;

    return (0);
}