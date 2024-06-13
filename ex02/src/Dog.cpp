/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:30 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/13 13:45:31 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor" << std::endl;
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Copy constructor" << std::endl;
    this->_brain = new Brain(*other._brain);   
}

Dog&    Dog::operator=(const Dog& other)
{
    if (&other != this)
    {
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
        std::cout << "Copy assignment construtor" << std::endl;
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouuuaaf wouuuaaf" << std::endl;
}