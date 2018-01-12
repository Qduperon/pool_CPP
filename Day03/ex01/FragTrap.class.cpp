/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:49:11 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 17:43:23 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.class.hpp"

FragTrap::FragTrap(std::string name) : _Name(name), _HitPoints(100), _MaxHitPoints(100), _EPoint(100), \
_MaxEPoint(100), _Level(1), _MAttack(30), _RAttack(20), _Armor(5), _compteur(4)
{
    std::cout << "Let's get this party started!" << std::endl;
    return;
}

FragTrap::~FragTrap(void)
{
  std::cout << "I'll die the way I lived: annoying!" << std::endl;
  return;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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


FragTrap::FragTrap(FragTrap const &src)
{
  *this = src;
  return;
}

void FragTrap::rangedAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at range, causing "<< this->_RAttack << " points of damage !" << std::endl;
  std::cout << "FR4G-TP " << this->_Name << " says : I expect you to die!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at melee, causing "<< this->_MAttack << " points of damage !" << std::endl;
  std::cout << "FR4G-TP " << this->_Name << " says : Meet professor punch!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
  if (amount <= (unsigned int)this->_Armor)
    std::cout << "FR4G-TP " << this->_Name << " says : Can't touch this!" << std::endl;
  else if (amount - this->_Armor >= (unsigned int)this->_HitPoints)
    std::cout << "FR4G-TP " << this->_Name << " died" << std::endl;
  else if (amount - this->_Armor > 0 && amount - this->_Armor < (unsigned int)this->_HitPoints)
    std::cout << "FR4G-TP " << this->_Name << " takes "<< (amount - 5) << " points of damage !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
  if (amount >= (unsigned int)this->_MaxHitPoints)
    std::cout << "FR4G-TP " << this->_Name << " recovers all his HPs" << std::endl;
  else if (amount < (unsigned int)this->_MaxHitPoints)
    std::cout << "FR4G-TP " << this->_Name << " recovers " << amount << " HPs"<< std::endl;
  std::cout << "FR4G-TP " << this->_Name << " active the third directive : dansing." << std::endl;
}

void FragTrap::Head(std::string const & target){ std::cout << "FR4G-TP " << this->_Name <<  \
" try to attack with his head " << target << " and did 0 damage" << std::endl;}

void FragTrap::Scream(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" screams and " << target << " run away" << std::endl; }

void FragTrap::Cry(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" cry and " << target << " laughs and chokes with his saliva... and died" << std::endl; }

void FragTrap::Bazooka(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" use a unicorn's bazooka and " << target << " takes " << this->_RAttack << " damage"<< std::endl; }

void FragTrap::Bomb(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" throw a grenade and blow himself and took " << this->_RAttack << " damage and "<< target << " heals himself"<< std::endl; }


void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
  void (FragTrap::*f[5])(std::string const &target) = {&FragTrap::Head, &FragTrap::Scream, &FragTrap::Cry, &FragTrap::Bazooka, &FragTrap::Bomb};
  int i;
  if (this->_EPoint == 0)
    {
      std::cout << "FR4G-TP " << this->_Name << " says : Dangit, I'm out!" << std::endl;
      return;
    }
  i = (rand() + _compteur * _compteur) % 5;
  _compteur++;
  (this->*f[i])(target);
  this->_EPoint -= 25;
}

//Gets
std::string FragTrap::GetName(void) const { return this->_Name; }
int FragTrap::GetHitPoints(void) const { return this->_HitPoints; }
int FragTrap::GetMaxHitPoints(void) const { return this->_MaxHitPoints; }
int FragTrap::GetEPoints(void) const { return this->_EPoint; }
int FragTrap::GetMaxEPoints(void) const { return this->_MaxEPoint; }
int FragTrap::GetLevel(void) const { return this->_Level; }
int FragTrap::GetMAttack(void) const { return this->_MAttack; }
int FragTrap::GetRAttack(void) const { return this->_RAttack; }
int FragTrap::GetArmor(void) const { return this->_Armor; }
