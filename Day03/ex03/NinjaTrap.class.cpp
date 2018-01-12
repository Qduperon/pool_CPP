/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 10:31:46 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 11:15:41 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("UnknownNinja", 60, 60, 120, 120, 1, 60, 5, 0)
{
  std::cout << "NinjaTrap by default" << std::endl;
  return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "I'm a robot ninja..." << std::endl;
    return;
}

NinjaTrap::~NinjaTrap(void)
{
  ClapTrap::~ClapTrap();
  std::cout << "Crap, no more shots left!" << std::endl;
  return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
{
  this->_Name = rhs.GetName();
  this->_HitPoints = rhs.GetHitPoints();
  this->_MaxHitPoints = rhs.GetMaxHitPoints();
  this->_EPoint = rhs.GetEPoints();
  this->_MaxEPoint = rhs.GetMaxHitPoints();
  this->_Level = rhs.GetLevel();
  this->_MAttack = rhs.GetMAttack();
  this->_RAttack = rhs.GetRAttack();
  this->_Armor = rhs.GetArmor();
  return *this;
}


NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
  *this = src;
  return;
}

void NinjaTrap::ninjaShoebox(ScavTrap target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target.GetName() << "and deals " << (this->_MAttack * 1.5) << " damages"<< std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target.GetName() << "and breaks " << target.GetArmor() << " armor"<< std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap target)
{
  std::cout << "FR4G-TP " << this->_Name << " become invisible and " << target.GetName() << " lost his trace" << std::endl;
}
