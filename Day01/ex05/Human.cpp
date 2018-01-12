/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:03:50 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 18:08:10 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Human.hpp"

Human::Human(void)
{

}

Human::~Human(void)
{

}

std::string Human::identify(void) const
{
  return(brain.identify());
}

Brain const &Human::getBrain(void) const
{
  return (this->brain);
}
