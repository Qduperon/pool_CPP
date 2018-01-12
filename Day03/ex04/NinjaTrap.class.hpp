/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 10:32:20 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/12 12:41:17 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_HPP
#define NINJATRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:

NinjaTrap(void);
~NinjaTrap(void);
NinjaTrap(std::string name);
NinjaTrap(NinjaTrap const &src);

NinjaTrap &operator=(NinjaTrap const & rhs);

void ninjaShoebox(ScavTrap target);
void ninjaShoebox(FragTrap target);
void ninjaShoebox(NinjaTrap target);

private:
};

#endif
