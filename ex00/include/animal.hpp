/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:18 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 11:48:52 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class animal
{
    protected:
        std::string _type;
        
    public:
        animal();
        animal(std::string type);
        animal(animal& other);
        animal& operator=(const animal& other);
        ~animal();

        void            set_type(std::string s_type);
        std::string     getType(void) const;
        virtual void            makeSound(void) const;
};

#endif