/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:34:17 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 15:43:08 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ZombieHorde.hpp"

int main(void)
{
  Horde horde = Horde(6);
  horde.announce();
  return 0;
}
