/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:25 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 11:48:58 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/animal.hpp"

animal::animal()
{
    std::cout << "Animal basic constructor" << std::endl;
}

animal::animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor of type : " << type << std::endl;
    
}

animal::animal(animal& other)
{
    this->_type = other._type;
    std::cout << "Copy constructor of : " << other._type << std::endl;
}

animal& animal::operator=(const animal& other)
{
    if (&other != this)
        this->_type = other._type;
    std::cout << "Copy assignment of : " << other._type << std::endl;
    return (*this);
}

animal::~animal()
{
    std::cout << "Animal destructor" << std::endl;
}

void            animal::makeSound(void) const
{
    std::cout << "Undefined animal make sound..." << std::endl;
}

void            animal::set_type(std::string s_type)
{
    _type = s_type;
}

std::string     animal::getType(void) const
{
    return (_type);
}
