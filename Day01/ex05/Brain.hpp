/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:03:54 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 18:03:00 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain {
public:

  std::string str;
  int IQ;

  Brain(void);
  ~Brain(void);

  std::string identify(void) const;

private:
};

#endif
