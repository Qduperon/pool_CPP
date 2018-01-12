/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:13:02 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 13:40:34 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./SuperTrap.class.hpp"

SuperTrap::SuperTrap(void) : NinjaTrap(), FragTrap()
{
  this->_Name = "UnknownSuper";
  this->_HitPoints = FragTrap::_HitPoints;
  this->_MaxHitPoints = FragTrap::_MaxHitPoints;
  this->_EPoint = NinjaTrap::_EPoint;
  this->_MaxEPoint = NinjaTrap::_MaxEPoint;
  this->_Level = 1;
  this->_MAttack = NinjaTrap::_MAttack;
  this->_RAttack = FragTrap::_RAttack;
  this->_Armor = FragTrap::_Armor;
  std::cout << "SuperTrap by default" << std::endl;
  return;
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(), FragTrap()
{
    this->_Name = name;
    this->_HitPoints = FragTrap::_HitPoints;
    this->_MaxHitPoints = FragTrap::_MaxHitPoints;
    this->_EPoint = NinjaTrap::_EPoint;
    this->_MaxEPoint = NinjaTrap::_MaxEPoint;
    this->_Level = 1;
    this->_MAttack = NinjaTrap::_MAttack;
    this->_RAttack = FragTrap::_RAttack;
    this->_Armor = FragTrap::_Armor;
    std::cout << "Step right up, to the Bulletnator 9000!" << std::endl;
    return;
}

SuperTrap::~SuperTrap(void)
{
  FragTrap::~FragTrap();
  NinjaTrap::~NinjaTrap();
  std::cout << "Cya nerds" << std::endl;
  return;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs)
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


SuperTrap::SuperTrap(SuperTrap const &src)
{
  *this = src;
  return;
}

void SuperTrap::rangedAttack(std::string target)
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string target)
{
    NinjaTrap::meleeAttack(target);
}
