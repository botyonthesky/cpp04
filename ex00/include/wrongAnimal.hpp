/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:24:18 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 13:02:12 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class wrongAnimal
{
    protected:
        std::string _type;
    
    public:
        wrongAnimal();
        wrongAnimal(std::string type);
        wrongAnimal(wrongAnimal& other);
        wrongAnimal& operator=(const wrongAnimal& other);
        ~wrongAnimal();
        
        std::string getType(void) const;
        void    makeSound(void) const;
};

#endif