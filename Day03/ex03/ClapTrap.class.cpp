/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:11:08 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 10:18:23 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _Name("UnknownClap"), _HitPoints(100), _MaxHitPoints(100), _EPoint(100), _MaxEPoint(100), _Level(1), _MAttack(20), _RAttack(20), _Armor(0)
{
    std::cout << "ClapTrap is built by default" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name, int HP, int MaxHP, int EP, int MaxEP, int level, int MA, int RA, int armor) : _Name(name), _HitPoints(HP), _MaxHitPoints(MaxHP), _EPoint(EP), _MaxEPoint(MaxEP), _Level(level), _MAttack(MA), _RAttack(RA), _Armor(armor)
{
  std::cout << "ClapTrap is built" << std::endl;
  return;
}

ClapTrap::~ClapTrap(void)
{
  std::cout << "ClapTrap is destroyed" << std::endl;
  return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
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


ClapTrap::ClapTrap(ClapTrap const &src)
{
  *this = src;
  return;
}

void ClapTrap::rangedAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at range, causing "<< this->_RAttack << " points of damage !" << std::endl;
  std::cout << "FR4G-TP " << this->_Name << " says : I expect you to die!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at melee, causing "<< this->_MAttack << " points of damage !" << std::endl;
  std::cout << "FR4G-TP " << this->_Name << " says : Meet professor punch!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (amount <= (unsigned int)this->_Armor)
    std::cout << "FR4G-TP " << this->_Name << " says : Can't touch this!" << std::endl;
  else if (amount - this->_Armor >= (unsigned int)this->_HitPoints)
    std::cout << "FR4G-TP " << this->_Name << " died" << std::endl;
  else if (amount - this->_Armor > 0 && amount - this->_Armor < (unsigned int)this->_HitPoints)
    std::cout << "FR4G-TP " << this->_Name << " takes "<< (amount - 5) << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (amount >= (unsigned int)this->_MaxHitPoints)
    std::cout << "FR4G-TP " << this->_Name << " recovers all his HPs" << std::endl;
  else if (amount < (unsigned int)this->_MaxHitPoints)
    std::cout << "FR4G-TP " << this->_Name << " recovers " << amount << " HPs"<< std::endl;
  std::cout << "FR4G-TP " << this->_Name << " active the third directive : dansing." << std::endl;
}

//Gets
std::string ClapTrap::GetName(void) const { return this->_Name; }
int ClapTrap::GetHitPoints(void) const { return this->_HitPoints; }
int ClapTrap::GetMaxHitPoints(void) const { return this->_MaxHitPoints; }
int ClapTrap::GetEPoints(void) const { return this->_EPoint; }
int ClapTrap::GetMaxEPoints(void) const { return this->_MaxEPoint; }
int ClapTrap::GetLevel(void) const { return this->_Level; }
int ClapTrap::GetMAttack(void) const { return this->_MAttack; }
int ClapTrap::GetRAttack(void) const { return this->_RAttack; }
int ClapTrap::GetArmor(void) const { return this->_Armor; }
