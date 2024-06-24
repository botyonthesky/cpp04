/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 07:32:40 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 07:14:05 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Materia Source Default constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "Materia Source copy" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_book[i] = other._book[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "Materia Source copy assignment" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            this->_book[i] = other._book[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "Material Source destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_book[i] != NULL)
            delete (_book[i]);
    }
}


void    MateriaSource::learnMateria(AMateria* materia)
{
    for(int i = 0; i < 4; i++)
    {
        if (_book[i] == materia)
            break;
        if (_book[i] == NULL)
        {
            _book[i] = materia;
            break;
        }
    }      
}


void    MateriaSource::display_book()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_book[i] != NULL)
            std::cout << this << " book have " << _book[i]->getType() << std::endl;
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    AMateria *news;
    
    for (int i = 0; i < 4; i++)
    {
        if (_book[i] != NULL)
        {
            if (_book[i]->getType() == type)
            {
                news = _book[i]->clone();
                return (news);
            }
        }
    } 
    return (NULL);
}



