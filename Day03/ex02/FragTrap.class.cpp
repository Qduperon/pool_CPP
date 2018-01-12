/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:49:11 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 10:14:48 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.class.hpp"

FragTrap::FragTrap(void) : ClapTrap("UnknownFrag", 100, 100, 100, 100, 1, 30, 20, 5), _compteur(4)
{
  std::cout << "FragTrap by default" << std::endl;
  return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5), _compteur(4)
{
    std::cout << "Let's get this party started!" << std::endl;
    return;
}

FragTrap::~FragTrap(void)
{
  ClapTrap::~ClapTrap();
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
