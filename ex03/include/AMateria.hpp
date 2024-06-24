/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 08:38:26 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 07:34:26 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        virtual ~AMateria();

        AMateria&           operator=(const AMateria& other);
        const std::string&  getType(void) const;
        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter&){};
};

#endif
