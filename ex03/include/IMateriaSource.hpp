/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 06:58:43 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 06:51:28 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
private:

public:
    virtual             ~IMateriaSource(){};
    virtual void        learnMateria(AMateria*) = 0;
    virtual void        display_book(void) = 0;

    virtual AMateria*   createMateria(std::string const & type) = 0;
};




#endif 