/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:26:43 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 11:16:09 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include <iostream>

int main(void)
{
  srand(time(NULL));
  std::cout << "ClapTraps' creation " << std::endl;
  std::cout << std::endl;
  FragTrap ClapTrap("ClapTrap");
  ScavTrap ClapTrap2("ClapTrap2");
  NinjaTrap ClapTrap3("ClapTrap3");
  std::cout << std::endl;
  std::cout << "end of ClapTraps' creation " << std::endl;
  std::cout << std::endl;
  std::cout << "FragTrap's test" << std::endl;
  std::cout << std::endl;
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

  std::cout << std::endl;
  std::cout << "end of FragTrap's test " << std::endl;
  std::cout << std::endl;
  std::cout << "ScavTrap's test" << std::endl;
  std::cout << std::endl;
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

  std::cout << std::endl;
  std::cout << "end of FragTrap's test " << std::endl;
  std::cout << std::endl;
  std::cout << "NinjaTrap's test" << std::endl;
  std::cout << std::endl;
  NinjaTrap ClapTrap4("Shinobi");

  ClapTrap3.meleeAttack("Carlos");
  ClapTrap3.rangedAttack("Carlos");

  ClapTrap3.takeDamage(105);
  ClapTrap3.takeDamage(90);
  ClapTrap3.takeDamage(0);

  ClapTrap3.beRepaired(5000);
  ClapTrap3.beRepaired(5);

  ClapTrap3.ninjaShoebox(ClapTrap);
  ClapTrap3.ninjaShoebox(ClapTrap2);
  ClapTrap3.ninjaShoebox(ClapTrap4);
  std::cout << std::endl;
  std::cout << "end of NinjaTrap's test " << std::endl;
  std::cout << std::endl;

  return 0;
}
