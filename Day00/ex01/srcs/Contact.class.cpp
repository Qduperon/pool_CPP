/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:17:42 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/08 18:57:20 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

Contact::Contact(void) : used(false)
{
  std::cout << "constructor working" << std::endl;
  return;
}

Contact::~Contact(void)
{
  // std::cout << "destroyer working" << std::endl;
  return;
}

void Contact::add(int i)
{
  std::cout << "Enter your first name" << std::endl;
  std::cin >> this->FirstName;
  std::cout << "Enter your last name" << std::endl;
  std::cin >> this->LastName;
  std::cout << "Enter your nickname" << std::endl;
  std::cin >> this->nickname;
  std::cout << "Enter your login" << std::endl;
  std::cin >> this->_login;
  std::cout << "Enter your postal adress" << std::endl;
  std::cin >> this->_postal_adress;
  std::cout << "Enter your email" << std::endl;
  std::cin >> this->_email;
  std::cout << "Enter your phone number" << std::endl;
  std::cin >> this->_phone_number;
  std::cout << "Enter your date of birth" << std::endl;
  std::cin >> this->_birth;
  std::cout << "Enter your favorite meal" << std::endl;
  std::cin >> this->_favorite_meal;
  std::cout << "Enter your underwear's color" << std::endl;
  std::cin >> this->_underwear_color;
  std::cout << "Enter your darkest secret" << std::endl;
  std::cin >> this->_darkest_secret;
  this->used = true;
  std::cout << "Register completed" << std::endl;
}
