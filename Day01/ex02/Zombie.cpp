/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:04:20 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 14:00:12 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(void)
{
  std::cout << "a zombie is back" << std::endl;
}

Zombie::~Zombie(void)
{
  std::cout << "a zombie backoff" << std::endl;
}

void Zombie::announce(void)
{
  std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
