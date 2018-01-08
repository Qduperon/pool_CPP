/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:55:07 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/08 19:02:49 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

void Contact::printinstance(Contact Current, int index)
{
  std::cout << index << "|";
  std::cout << this->FirstName << "|";
  std::cout << this->LastName << "|";
  std::cout << this->nickname << "|" << std::endl;
}

void search (Contact tab[8])
{
  int i;

  i = 0;
  while (i < 8)
  {
    std::cout << i << std::endl;
    // if (tab[i].used)
      // tab[i].printinstance(tab[i], i);
    i++;
  }
  return;
}

int  currentTab(Contact tab[8])
{
  int i;

  i = 0;
  while (i < 8)
  {
    if (!tab[i].used)
      return(i);
    i++;
  }
  return(-1);
}

void error(void)
{
  std::cout << "Please enter:" << std::endl;
  std::cout << "ADD : to add a contact" << std::endl;
  std::cout << "SEARCH : to search a contact" << std::endl;
  std::cout << "EXIT : to quit the app" << std::endl;
}

int main()
{
  std::string str;
  Contact tabContact[8];
  int index;

  std::cout << "Welcome to your mobile phone" << std::endl;
  while (str.compare("EXIT"))
  {
    std::cin >> str;
    index = currentTab(&tabContact[8]);
    if (str.compare("SEARCH") == 0)
      search(&tabContact[8]);
    else if (str.compare("ADD") == 0)
      tabContact[index].add(index);
    else if (str.compare("EXIT") != 0)
      error();
  }
  return 0;
}
