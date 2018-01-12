/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:52:23 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 15:57:36 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
  std::string   str = "HI THIS IS BRAIN";
  std::string*   ptr = &str;
  std::string&  ref = str;

  std::cout << *ptr << ": this is the pointer" << std::endl;
  std::cout << ref << ": this is the reference" << std::endl;
  return 0;
}
