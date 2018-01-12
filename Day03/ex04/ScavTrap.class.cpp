/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:44:18 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 10:11:21 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("UnknownScav", 100, 100, 50, 50, 1, 20, 15, 3), _compteur(4)
{
  std::cout << "ScavTrap by default" << std::endl;
  return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3), _compteur(4)
{
    std::cout << "This time it'll be awesome, I promise!" << std::endl;
    return;
}

ScavTrap::~ScavTrap(void)
{
  ClapTrap::~ClapTrap();
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
