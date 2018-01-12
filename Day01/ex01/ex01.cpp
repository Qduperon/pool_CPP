/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:57:29 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 13:01:11 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
  std::string* panthere = new std::string("String panthere");
  std::cout << *panthere << std::endl;
  delete panthere; 
}
