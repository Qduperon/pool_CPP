/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:17:42 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 10:17:49 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

Contact::Contact(void) : used(false)
{
  // std::cout << "constructor working" << std::endl;
  return;
}

Contact::~Contact(void)
{
  // std::cout << "destroyer working" << std::endl;
  return;
}

void Contact::add(void)
{
  this->used = true;
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
  std::cout << "Register completed" << std::endl;
}

void Contact::print(void) const
{
  std::cout << this->FirstName << std::endl;
  std::cout << this->LastName << std::endl;
  std::cout << this->nickname << std::endl;
  std::cout << this->_login << std::endl;
  std::cout << this->_postal_adress << std::endl;
  std::cout << this->_email << std::endl;
  std::cout << this->_phone_number << std::endl;
  std::cout << this->_birth << std::endl;
  std::cout << this->_favorite_meal << std::endl;
  std::cout << this->_underwear_color << std::endl;
  std::cout << this->_darkest_secret << std::endl;
}
