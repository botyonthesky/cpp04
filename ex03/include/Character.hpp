/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 07:01:32 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 07:07:25 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
    private:
        std::string     _name;
        AMateria        *_inventory[4];
        
    public:

        Character(const std::string name);
        Character(const Character &other);
        Character& operator=(const Character &other);
        ~Character();
        
        const std::string&  getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);

};




#endif