/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:24:53 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/08 13:49:11 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void compt(char *argv)
{
  int i;

  i = 0;
  while (argv[i])
  {
    if (argv[i] >= 'a' && argv[i] <= 'z')
      argv[i] -= 32;
    i++;
  }
  std::cout << argv;
}


int main(int argc, char **argv)
{
  int i = 0;
  int a;

  if (argc <= 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
    while (++i < argc)
      compt(argv[i]);
    std::cout << std::endl;
  return 0;
}
