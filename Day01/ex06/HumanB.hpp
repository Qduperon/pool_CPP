/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:28:33 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 19:13:38 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
public:

Weapon *weapon;
std::string name;

HumanB(std::string name);
~HumanB(void);

void attack(void);
void setWeapon(Weapon &weapon);

private:

};

#endif
