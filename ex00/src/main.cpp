/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:33 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 12:58:17 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/animal.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/cat.hpp"
#include "../include/wrongCat.hpp"
#include "../include/dog.hpp"

int main()
{    
    const animal* meta = new animal();
    const animal* j = new dog();
    const animal* i = new cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const wrongAnimal* meta2 = new wrongAnimal();
    const wrongAnimal* i2 = new wrongCat();
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