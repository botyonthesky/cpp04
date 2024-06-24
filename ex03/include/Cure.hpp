/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:10:38 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 07:01:33 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        
    public:
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        ~Cure();

        Cure* clone(void) const;
        void    use(ICharacter& target);
    };


#endif