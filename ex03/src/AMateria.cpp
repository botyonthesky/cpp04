/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 08:39:19 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/21 08:39:38 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria constructor, type : " << this->getType()
    << std::endl;
}
AMateria::AMateria(const AMateria& other)
{
    this->_type = other.getType();
    std::cout << "AMateria copy constructor, type : " << this->getType()
    << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
        this->_type = other.getType();
    std::cout << "AMateria copy assignment constructor, type : " << this->getType()
    << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Destructor, type : " << this->getType()
    << std::endl;    
}

std::string const &AMateria::getType() const
{
    return (_type);
}