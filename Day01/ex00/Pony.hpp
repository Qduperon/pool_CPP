/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:42:57 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 12:49:34 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony {
public:

Pony(std::string name, std::string colors);
~Pony(void);

std::string color;

private:
  std::string _name;

};

#endif
