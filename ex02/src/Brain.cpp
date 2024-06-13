/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:07:13 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/13 12:22:54 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain& other)
{
    if (&other != this)
    {
        for (int i = 0; i < NB_IDEAS; i++)
            this->_ideas[i] = other._ideas[i];
    }
}

Brain& Brain::operator=(const Brain&)
{
    std::cout << "Copy assignment constructor" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

std::string Brain::get_ideas(int index)
{
    return (_ideas[index]);   
}
