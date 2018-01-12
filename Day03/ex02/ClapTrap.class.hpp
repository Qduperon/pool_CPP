/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:10:19 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 10:23:17 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <iostream>

class ClapTrap
{
public:

ClapTrap(void);
ClapTrap(std::string name, int HP, int MaxHP, int EP, int MaxEP, int level, int MA, int RA, int armor);
~ClapTrap(void);
ClapTrap(ClapTrap const &src);

ClapTrap &operator=(ClapTrap const & rhs);

void rangedAttack(std::string const & target);
void meleeAttack(std::string const & target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);

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

protected:
  std::string _Name;

  int _HitPoints;
  int _MaxHitPoints;
  int _EPoint;
  int _MaxEPoint;
  int _Level;
  int _MAttack;
  int _RAttack;
  int _Armor;

private:

};

#endif
