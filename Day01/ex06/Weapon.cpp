/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:10:59 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 19:20:25 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{

}

Weapon::~Weapon(void)
{

}

std::string const &Weapon::getType(void)
{
  return (this->type);
}

void  Weapon::setType(std::string str)
{
  this->type = str;
}
