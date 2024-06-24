/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:03:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 07:01:42 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"


class Ice : public AMateria
{
    private:
        
    public:
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();

        Ice*     clone(void) const;
        void    use(ICharacter& target);
        
};

#endif
