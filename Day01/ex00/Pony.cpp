/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:44:13 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 12:50:36 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Pony.hpp"

Pony::Pony(std::string name, std::string colors) : _name(name), color(colors)
{
  std::cout << this->_name << " is here" << std::endl;
}

Pony::~Pony(void)
{
  std::cout << this->_name << "run away" << std::endl;
}
