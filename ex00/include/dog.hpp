/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:23 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 07:31:43 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "animal.hpp"

class dog : public animal
{
    public:
        dog();
        dog(std::string type);
        dog(dog& other);
        dog& operator=(const dog& other);
        ~dog();
    
        void    makeSound(void) const;
        
    private:
};

#endif