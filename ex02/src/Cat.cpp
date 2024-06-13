/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:28 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/13 13:43:27 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor" << std::endl;
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
    delete _brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Copy constructor" << std::endl;
    this->_brain = new Brain(*other._brain);   
}

Cat& Cat::operator=(const Cat& other)
{
    if (&other != this)
    {
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
        Animal::operator=(other);
        std::cout << "Copy assignment construtor" << std::endl;
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miiiiiiiaaaaaaouuuuuu" << std::endl;
}