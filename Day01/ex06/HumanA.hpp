/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:12:12 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 19:17:28 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:

Weapon &weapon;
std::string name;

HumanA(std::string name, Weapon &weapon);
~HumanA(void);

void attack(void);

private:

};

#endif
