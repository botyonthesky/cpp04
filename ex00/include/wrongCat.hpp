/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:24:21 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 12:39:45 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
    public:
        wrongCat();
        wrongCat(std::string type);
        wrongCat(wrongCat& other);
        wrongCat& operator=(wrongCat& other);
        ~wrongCat();
        
        void    makeSound(void) const;
};

#endif