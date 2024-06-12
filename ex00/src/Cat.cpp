/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:28 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 14:00:37 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Basic Cat constructor" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Constructor type : " << type << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(Cat& other) : Animal::Animal(other)
{
    
}

Cat& Cat::operator=(const Cat& other)
{
    Animal::operator=(other);
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miiiiiiiaaaaaaouuuuuu" << std::endl;
}