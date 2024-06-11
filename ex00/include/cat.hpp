/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:21 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/11 06:59:39 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "animal.hpp"

class cat : public animal
{
    public:
        cat();
        cat(std::string type);
        cat(cat& other);
        cat& operator=(const cat& other);
        ~cat();

        void        makeSound(void) const;
        
    private:
    
};


#endif