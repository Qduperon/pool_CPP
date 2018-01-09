/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:55:07 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 11:10:38 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

std::string getRight(std::string str)
{
  size_t   strExpectedLength = 10;
  char  completionChar = ' ';
  char  truncatedMarkChar = '.';
  std::string rightStr;

  if (str.length() < strExpectedLength)
  {
    size_t strSize = str.length();
    size_t i = -1;
    while (++i < strExpectedLength - strSize)
    {
      rightStr += completionChar;
    }
    rightStr += str;
  }
    else
    {
      rightStr = str.substr(0, strExpectedLength -1);
      rightStr += truncatedMarkChar;
    }
  return rightStr;
}

void search (Contact tab[8])
{
  int i;
  std::string index;
  int verif;

  i = 0;
  while (i < 8 && tab[i].used == true)
  {
    std::cout <<"         " << i << "|" <<getRight(tab[i].FirstName) << "|" << getRight(tab[i].LastName) \
      << "|" << getRight(tab[i].nickname) << "|" << std::endl;
    i++;
  }
  if (i != 0)
  {
    std::cout << "choose a index :" << std::endl;
    std::cin >> index;
    if (isdigit(index[0]))
      verif = std::stoi(index);
    if (verif <= (i - 1) && verif >= 0)
      tab[verif].print();
    else
      std::cout << "back to the menu" << std::endl;
  }
  else
  {
    std::cout << "0 contact" << std::endl;
    std::cout << "back to the menu" << std::endl;
  }
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
  while (std::getline (std::cin,str))
  {
    index = currentTab(tabContact);
    if (str.compare("SEARCH") == 0)
      search(tabContact);
    else if (str.compare("ADD") == 0 && index != -1)
      tabContact[index].add();
    else if (str.compare("ADD") == 0 && index == -1)
      std::cout << "your book is full" << std::endl;
    else if (str.compare("EXIT") != 0)
      error();
    else if (!str.compare("EXIT"))
      return (0);
  }
}
