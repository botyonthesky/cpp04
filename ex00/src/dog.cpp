/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:30 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 12:57:03 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/animal.hpp"
#include "../include/dog.hpp"

dog::dog() : animal("Dog")
{
    std::cout << "Basic dog constructor" << std::endl;
}

dog::dog(std::string type) : animal(type)
{
    std::cout << "Constructor type : " << _type << std::endl;
}

dog::~dog()
{
    std::cout << "Dog destructor" << std::endl;
}

dog::dog(dog& other) : animal::animal(other)
{
}

dog&    dog::operator=(const dog& other)
{
    animal::operator=(other);
    return (*this);
}

void    dog::makeSound(void) const
{
    std::cout << "Wouuuaaf wouuuaaf" << std::endl;
}