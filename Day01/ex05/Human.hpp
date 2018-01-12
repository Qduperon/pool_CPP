/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:03:45 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 18:07:54 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "./Brain.hpp"

class Human {
public:

Brain const brain;
std::string str;

Human(void);
~Human(void);
Brain const &getBrain(void) const;

std::string  identify(void) const;

private:
};

#endif
