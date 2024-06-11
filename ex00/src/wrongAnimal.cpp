/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:24:25 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 11:48:40 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    std::cout << "Wrong Animal basic constructor" << std::endl;
}

wrongAnimal::wrongAnimal(std::string type) : _type(type)
{
    std::cout << "Wrong Animal constructor of type : "
    << this->_type << std::endl;
}

wrongAnimal::wrongAnimal(wrongAnimal& other)
{
    this->_type = other._type;
    std::cout << "Copy constructor of : " << other._type << std::endl;
}

wrongAnimal&    wrongAnimal::operator=(const wrongAnimal& other)
{
    if (&other != this)
        this->_type = other._type;
    std::cout << "Copy assignment of : " << other._type << std::endl;
    return (*this);
}

wrongAnimal::~wrongAnimal()
{
    std::cout << "Wrong Animal destructor" << std::endl;
}

std::string     wrongAnimal::getType(void) const
{
    return (_type);
}

void    wrongAnimal::makeSound(void) const
{
    std::cout << "Undefined Wrong Animal make sound..." << std::endl;
}

