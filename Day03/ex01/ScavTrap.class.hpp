/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:44:00 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 17:41:21 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <iostream>

class ScavTrap
{
public:

ScavTrap(std::string name);
~ScavTrap(void);
ScavTrap(ScavTrap const &src);

ScavTrap &operator=(ScavTrap const & rhs);

void rangedAttack(std::string const & target);
void meleeAttack(std::string const & target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);

void Joke(std::string const & target);
void laugh(std::string const & target);
void Danse(std::string const & target);
void Sing(std::string const & target);
void Ultimate(std::string const & target);

void challengeNewcomer(std::string const target);

std::string GetName(void) const;
int GetHitPoints(void) const;
int GetMaxHitPoints(void) const;
int GetEPoints(void) const;
int GetMaxEPoints(void) const;
int GetLevel(void) const;
int GetMAttack(void) const;
int GetRAttack(void) const;
int GetArmor(void) const;

private:
  std::string _Name;

  int _HitPoints;
  int _MaxHitPoints;
  int _EPoint;
  int _MaxEPoint;
  int _Level;
  int _MAttack;
  int _RAttack;
  int _Armor;
  int _compteur;
};

#endif
