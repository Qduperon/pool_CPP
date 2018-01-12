/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:44:18 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 17:43:45 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.class.hpp"

ScavTrap::ScavTrap(std::string name) : _Name(name), _HitPoints(100), _MaxHitPoints(100), _EPoint(50), \
_MaxEPoint(50), _Level(1), _MAttack(20), _RAttack(15), _Armor(3), _compteur(4)
{
    std::cout << "This time it'll be awesome, I promise!" << std::endl;
    return;
}

ScavTrap::~ScavTrap(void)
{
  std::cout << "Hnngh! Empty!" << std::endl;
  return;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
  // std::cout << "Assignation operator called" << std::endl;
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


ScavTrap::ScavTrap(ScavTrap const &src)
{
  *this = src;
  return;
}

void ScavTrap::rangedAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at range, causing "<< this->_RAttack << " points of damage !" << std::endl;
  std::cout << "FR4G-TP " << this->_Name << " says : I didn't panic! Nope, not me!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at melee, causing "<< this->_MAttack << " points of damage !" << std::endl;
  std::cout << "FR4G-TP " << this->_Name << " says : Ready for the PUNCHline?!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
  if (amount <= (unsigned int)this->_Armor)
    std::cout << "FR4G-TP " << this->_Name << " says : Gimme your best shot." << std::endl;
  else if (amount - this->_Armor >= (unsigned int)this->_HitPoints)
    std::cout << "FR4G-TP " << this->_Name << " Reboots..." << std::endl;
  else if (amount - this->_Armor > 0 && amount - this->_Armor < (unsigned int)this->_HitPoints)
    std::cout << "FR4G-TP " << this->_Name << " takes "<< (amount - 5) << " points of damage !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
  if (amount >= (unsigned int)this->_MaxHitPoints)
    std::cout << "FR4G-TP " << this->_Name << " recovers all his life" << std::endl;
  else if (amount < (unsigned int)this->_MaxHitPoints)
    std::cout << "FR4G-TP " << this->_Name << " recovers " << amount << " HPs"<< std::endl;
  std::cout << "FR4G-TP " << this->_Name << " Why do I feel radioactive!?" << std::endl;
}

void ScavTrap::Joke(std::string const & target){ std::cout << "FR4G-TP " << this->_Name <<  \
" challenge " << target << " on the joke challenge and failed completely"<< std::endl;}

void ScavTrap::laugh(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" laugh and " << target << " laugh louder... and " <<this->_Name << "laugh like an otter and won the challenge" << std::endl; }

void ScavTrap::Danse(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" danse the robot's danse and " << target << " fall when he tries to danse" << std::endl; }

void ScavTrap::Sing(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" cheat and use youtube to win against " << target << std::endl; }

void ScavTrap::Ultimate(std::string const & target) { std::cout << "FR4G-TP " << this->_Name <<  \
" the staring combat begin and " << target << " loose because he blinks"<< std::endl; }

void ScavTrap::challengeNewcomer(std::string const target)
{
  void (ScavTrap::*f[5])(std::string const &target) = {&ScavTrap::Joke, &ScavTrap::laugh, &ScavTrap::Danse, &ScavTrap::Sing, &ScavTrap::Ultimate};
  int i;
  if (this->_EPoint == 0)
    {
      std::cout << "FR4G-TP " << this->_Name << " says : Oh i'm out of energie... RUN FOR YOUR LIIIIIVES!!!" << std::endl;
      return;
    }
  i = (rand() + _compteur * _compteur) % 5;
  _compteur++;
  (this->*f[i])(target);
  this->_EPoint -= 25;
}

//Gets
std::string ScavTrap::GetName(void) const { return this->_Name; }
int ScavTrap::GetHitPoints(void) const { return this->_HitPoints; }
int ScavTrap::GetMaxHitPoints(void) const { return this->_MaxHitPoints; }
int ScavTrap::GetEPoints(void) const { return this->_EPoint; }
int ScavTrap::GetMaxEPoints(void) const { return this->_MaxEPoint; }
int ScavTrap::GetLevel(void) const { return this->_Level; }
int ScavTrap::GetMAttack(void) const { return this->_MAttack; }
int ScavTrap::GetRAttack(void) const { return this->_RAttack; }
int ScavTrap::GetArmor(void) const { return this->_Armor; }
