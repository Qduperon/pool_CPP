/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:44:09 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 12:50:12 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Pony.hpp"

void  ponyOnTheHeap(void)
{
  Pony* Lily = new Pony ("Lily", "yellow");
  std::cout << "Lily is " << Lily->color << std::endl;
  Lily->color = "brown";
  std::cout << "Lily now is " << Lily->color << std::endl;
  delete Lily;
}

void ponyOnTheStack(void)
{
  Pony Johnny = Pony("Johnny", "red");
  std::cout << "Johnny is " << Johnny.color << std::endl;
  Johnny.color = "black";
  std::cout << "Johnny now is " << Johnny.color << std::endl;
}

int main(void)
{
  ponyOnTheHeap();
  ponyOnTheStack();
  return 0;
}
