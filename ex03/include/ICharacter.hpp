/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 08:46:09 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 07:01:49 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    private:
        
    public:
        virtual ~ICharacter() {};    
        virtual const std::string&  getName() const = 0;
        virtual void                equip(AMateria* m) = 0;
        virtual void                unequip(int idx) = 0;
        virtual void                use(int idx, ICharacter& target) = 0;
};




#endif