/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:16:53 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 06:58:52 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(const std::string name) : _name(name)
{
    std::cout << "Character constructor, name : " << _name
    << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
}

Character::Character(const Character& other) : _name(other._name)
{
    std::cout << "Character copy, name : " << _name << std::endl;
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = other._inventory[i];
}

Character& Character::operator=(const Character &other)
{
    std::cout << "Character copy assignment, name : " << _name << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            this->_inventory[i] = other._inventory[i];
        }
        this->_name = other._name;
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character destructor, name : " << _name
    << std::endl;   
}

const std::string&      Character::getName() const
{
    return (_name);
}


void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
        {
            this->_inventory[i] = m;
            break;
        }
    }
}
void    Character::unequip(int idx)
{
    if (_inventory[idx] != NULL)
        this->_inventory[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if (_inventory[idx] != NULL)
        _inventory[idx]->use(target);
}
