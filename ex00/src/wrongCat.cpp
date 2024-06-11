/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:24:27 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 13:01:12 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"

wrongCat::wrongCat() : wrongAnimal("Wrong Cat")
{
    std::cout << "Basic Wrong Cat constructor" << std::endl;
}

wrongCat::wrongCat(std::string type) : wrongAnimal(type)
{
    std::cout << "Wrong cat constructor of type : "
    << this->_type << std::endl;
}

wrongCat::wrongCat(wrongCat& other) : wrongAnimal::wrongAnimal(other)
{
}

wrongCat& wrongCat::operator=(wrongCat& other)
{
    wrongAnimal::operator=(other);
    return (*this);
}

wrongCat::~wrongCat()
{
    std::cout << "Wrong Cat destructor" << std::endl;
}

// void    wrongCat::makeSound(void) const
// {
//     wrongAnimal::makeSound();
// }
