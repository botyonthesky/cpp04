/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:25 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 13:54:49 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal basic constructor" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor of type : " << type << std::endl;
    
}

Animal::Animal(Animal& other)
{
    this->_type = other._type;
    std::cout << "Copy constructor of : " << other._type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (&other != this)
        this->_type = other._type;
    std::cout << "Copy assignment of : " << other._type << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

void            Animal::makeSound(void) const
{
    std::cout << "Undefined Animal make sound..." << std::endl;
}

void            Animal::set_type(std::string s_type)
{
    _type = s_type;
}

std::string     Animal::getType(void) const
{
    return (_type);
}
