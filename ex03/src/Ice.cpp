/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:04:07 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/21 13:04:15 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include "../include/AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor, type : " << this->getType()
    << std::endl;
}
Ice::Ice(const Ice& other)
{
    std::cout << "Ice copy, type : " << _type << std::endl;
    this->_type = other.getType();
}
Ice&    Ice::operator=(const Ice& other)
{
    std::cout << "Ice copy assignment, type : " << _type << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor, type : " <<this->getType()
    << std::endl;
}

Ice*     Ice::clone() const
{
    Ice *news;

    news = new Ice();
    return (news);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName()
    << std::endl;
}
