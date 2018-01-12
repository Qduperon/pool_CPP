/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:11:13 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 19:14:23 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:

  std::string type;

  Weapon(std::string type);
  ~Weapon(void);

  std::string const &getType(void);
  void setType(std::string str);

private:

};

#endif
