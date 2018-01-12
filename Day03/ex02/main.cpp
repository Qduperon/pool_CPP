/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:26:43 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 17:36:47 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main(void)
{
  srand(time(NULL));
  FragTrap ClapTrap("ClapTrap");
  ScavTrap ClapTrap2("ClapTrap2");

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

  ClapTrap2.meleeAttack("Patrick");
  ClapTrap2.rangedAttack("Patrick");

  ClapTrap2.takeDamage(105);
  ClapTrap2.takeDamage(90);
  ClapTrap2.takeDamage(0);

  ClapTrap2.beRepaired(5000);
  ClapTrap2.beRepaired(5);
  
  ClapTrap2.challengeNewcomer("Patrick");
  ClapTrap2.challengeNewcomer("Patrick");
  ClapTrap2.challengeNewcomer("Patrick");
  return 0;
}
