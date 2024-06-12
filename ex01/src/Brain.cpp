/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:07:13 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 14:12:58 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor" << std::endl;
}

Brain& Brain::operator=(Brain& other)
{
    std::cout << "Copy assignment constructor" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

