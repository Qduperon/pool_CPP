/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:34:17 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 14:10:48 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ZombieEvent.hpp"

void  randomChump(void)
{
  std::string tab[5] = {"Paul", "Tom", "Lily", "Cooper", "Tania"};
  int i;
  srand(time(NULL));
  i = rand() % 5;
  Zombie  newOne = Zombie();
  newOne.name = tab[i];
  newOne.type = "hungry";
  newOne.announce();
}

int main(void)
{
  ZombieEvent hello = ZombieEvent();
  hello.here = hello.newZombie("lola", "piou");
  hello.here->announce();
  delete hello.here;
  randomChump();
  return 0;
}
