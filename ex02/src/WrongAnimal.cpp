/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:24:25 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 14:05:17 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong Animal basic constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "Wrong Animal constructor of type : "
    << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& other)
{
    this->_type = other._type;
    std::cout << "Copy constructor of : " << other._type << std::endl;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& other)
{
    if (&other != this)
        this->_type = other._type;
    std::cout << "Copy assignment of : " << other._type << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor" << std::endl;
}

std::string     WrongAnimal::getType(void) const
{
    return (_type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Undefined Wrong Animal make sound..." << std::endl;
}

