/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:13:31 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 13:25:41 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_HPP
#define SUPERTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:

SuperTrap(void);
~SuperTrap(void);
SuperTrap(std::string name);
SuperTrap(SuperTrap const &src);

SuperTrap &operator=(SuperTrap const & rhs);
void meleeAttack(std::string target);
void rangedAttack(std::string target);

private:
};

#endif
