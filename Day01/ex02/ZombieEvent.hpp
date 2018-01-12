/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:05:44 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 14:07:49 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "./Zombie.hpp"

class ZombieEvent {
public:

ZombieEvent(void);
~ZombieEvent(void);

Zombie *here;

void setZombieType(std::string NewType, Zombie Zombie);
Zombie *newZombie(std::string name, std::string type);

private:
};

#endif
