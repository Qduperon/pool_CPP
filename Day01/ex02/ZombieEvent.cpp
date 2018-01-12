/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:06:04 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 14:01:13 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{

}

ZombieEvent::~ZombieEvent(void)
{

}

void ZombieEvent::setZombieType(std::string NewType, Zombie Zombie)
{
  Zombie.type = NewType;
}

Zombie *ZombieEvent::newZombie(std::string name, std::string type)
{
  Zombie *newOne = new Zombie;
  newOne->name = name;
  newOne->type = type;
  return (newOne);
}
