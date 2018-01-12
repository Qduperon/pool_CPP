/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:11:51 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 19:19:25 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void  HumanA::attack(void)
{
  std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
