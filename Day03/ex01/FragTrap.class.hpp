/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:50:09 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 15:45:48 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include <iostream>

class FragTrap
{
public:

FragTrap(std::string name);
~FragTrap(void);
FragTrap(FragTrap const &src);

FragTrap &operator=(FragTrap const & rhs);

void rangedAttack(std::string const & target);
void meleeAttack(std::string const & target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);

void Head(std::string const & target);
void Scream(std::string const & target);
void Cry(std::string const & target);
void Bazooka(std::string const & target);
void Bomb(std::string const & target);

void vaulthunter_dot_exe(std::string const & target);

//Gets
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
