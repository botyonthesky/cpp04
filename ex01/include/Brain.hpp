/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:53:50 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 14:10:13 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
};




#endif