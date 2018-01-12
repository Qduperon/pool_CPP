/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:17:13 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 15:48:04 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Horde::Horde(int n) : _nb(n)
{
  Zombie* hordetmp = new Zombie[n];
  std::string tab[5] = {"Paul", "Tom", "Lily", "Cooper", "Tania"};
  int i;
  int index;
  int blou;

  index = 0;
  blou = n * n;
  while (index <= n)
  {
    srand(time(NULL));
    i = (rand() + blou) % 5;
    hordetmp[index].name = tab[i];
    hordetmp[index].type = "Plume";
    index++;
    blou++;
  }
  horde = hordetmp;
}

Horde::~Horde(void)
{
  delete [] this->horde;
}

void Horde::announce(void)
{
  int i;

  i = 0;
  while (i <= _nb)
  {
    std::cout << "<" << this->horde[i].name << " (" << this->horde[i].type << ")> Braiiiiiiinnnssss..." << std::endl;
    i++;
  }
}
