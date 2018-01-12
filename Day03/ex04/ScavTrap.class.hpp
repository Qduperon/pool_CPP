/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:44:00 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 10:08:31 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
public:

ScavTrap(void);
~ScavTrap(void);
ScavTrap(std::string name);
ScavTrap(ScavTrap const &src);

ScavTrap &operator=(ScavTrap const & rhs);

void Joke(std::string const & target);
void laugh(std::string const & target);
void Danse(std::string const & target);
void Sing(std::string const & target);
void Ultimate(std::string const & target);

void challengeNewcomer(std::string const target);

private:
  int _compteur;
};

#endif
