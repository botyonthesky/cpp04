/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:30 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 13:58:41 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Basic Dog constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Constructor type : " << _type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(Dog& other) : Animal::Animal(other)
{
}

Dog&    Dog::operator=(const Dog& other)
{
    Animal::operator=(other);
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouuuaaf wouuuaaf" << std::endl;
}