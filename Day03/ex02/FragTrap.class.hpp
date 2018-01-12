/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:50:09 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 10:14:36 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
public:

FragTrap(void);
~FragTrap(void);
FragTrap(std::string name);
FragTrap(FragTrap const &src);

FragTrap &operator=(FragTrap const & rhs);

void Head(std::string const & target);
void Scream(std::string const & target);
void Cry(std::string const & target);
void Bazooka(std::string const & target);
void Bomb(std::string const & target);

void vaulthunter_dot_exe(std::string const & target);

private:
  int _compteur;
};

#endif
