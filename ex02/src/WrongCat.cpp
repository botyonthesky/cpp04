/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:24:27 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/13 12:04:30 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
    std::cout << "Basic Wrong Cat constructor" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "Wrong cat constructor of type : "
    << this->_type << std::endl;
}

WrongCat::WrongCat(WrongCat& other) : WrongAnimal::WrongAnimal(other)
{
}

WrongCat& WrongCat::operator=(WrongCat& other)
{
    WrongAnimal::operator=(other);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor" << std::endl;
}

// void    WrongCat::makeSound(void) const
// {
//     WrongAnimal::makeSound();
// }
