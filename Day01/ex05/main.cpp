/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:03:39 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 17:11:58 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Human.hpp"
// #include "./Brain.hpp"

int main()
{
  Human bob;
  std::cout << bob.identify() << std::endl;
  std::cout << bob.getBrain().identify() << std::endl;
}
