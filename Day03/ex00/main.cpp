/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:26:43 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 16:27:26 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int main(void)
{
  srand(time(NULL));
  FragTrap ClapTrap("ClapTrap");

  ClapTrap.meleeAttack("Spongebob");
  ClapTrap.rangedAttack("Spongebob");

  ClapTrap.takeDamage(105);
  ClapTrap.takeDamage(90);
  ClapTrap.takeDamage(0);

  ClapTrap.beRepaired(5000);
  ClapTrap.beRepaired(5);

  ClapTrap.vaulthunter_dot_exe("Spongebob");
  ClapTrap.vaulthunter_dot_exe("Spongebob");
  ClapTrap.vaulthunter_dot_exe("Spongebob");
  ClapTrap.vaulthunter_dot_exe("Spongebob");
  ClapTrap.vaulthunter_dot_exe("Spongebob");
  return 0;
}
