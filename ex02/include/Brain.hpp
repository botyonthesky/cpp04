/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:53:50 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/13 12:22:22 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

#define NB_IDEAS 100

class Brain
{
private:
    std::string _ideas[NB_IDEAS];
public:
    Brain();
    Brain(Brain& other);
    Brain& operator=(const Brain&);
    ~Brain();

    std::string     get_ideas(int index);
};




#endif