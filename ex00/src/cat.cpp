/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:28 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 12:57:14 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/animal.hpp"
#include "../include/cat.hpp"

cat::cat() : animal("Cat")
{
    std::cout << "Basic cat constructor" << std::endl;
}

cat::cat(std::string type) : animal(type)
{
    std::cout << "Constructor type : " << type << std::endl;
}

cat::~cat()
{
    std::cout << "Cat destructor" << std::endl;
}

cat::cat(cat& other) : animal::animal(other)
{
    
}

cat& cat::operator=(const cat& other)
{
    animal::operator=(other);
    return (*this);
}

void    cat::makeSound(void) const
{
    std::cout << "Miiiiiiiaaaaaaouuuuuu" << std::endl;
}