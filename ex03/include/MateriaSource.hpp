/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 07:33:25 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/24 07:02:02 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
    private:
        AMateria    *_book[4];
        
    public:

        MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource& operator=(const MateriaSource &other);
        ~MateriaSource();


        void        display_book(void);
        void        learnMateria(AMateria*);
        AMateria*   createMateria(std::string const & type);
};





#endif