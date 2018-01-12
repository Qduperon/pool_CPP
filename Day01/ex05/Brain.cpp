/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:01:34 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 18:03:13 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain(void)
{

}

Brain::~Brain(void)
{

}

std::string Brain::identify(void) const
{
  std::stringstream addr;

  addr << this;
  return (addr.str());
}
