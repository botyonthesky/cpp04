/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:18 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/18 07:17:30 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;
        
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        void            set_type(std::string s_type);
        std::string     getType(void) const;
        virtual void            makeSound(void) const;
};

#endif