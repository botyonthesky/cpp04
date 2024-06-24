/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:34:06 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/21 13:02:37 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include "../include/AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor, type : " << this->getType() << std::endl;
}

Cure::Cure(const Cure& other)
{
    std::cout << "Cure copy, type : " << _type << std::endl;
    this->_type = other.getType();
}

Cure&   Cure::operator=(const Cure& other)
{
    std::cout << "Cure copy assignment, type : " << _type << std::endl;
    if (this != &other)
        this->_type = other.getType();   
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure destructor, type : " << this->getType() << std::endl;
}

Cure*    Cure::clone() const
{
    Cure  *news;

    news = new Cure();
    return (news);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *"
    << std::endl;
}
