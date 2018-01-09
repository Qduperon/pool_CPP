/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:15:24 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/09 10:41:07 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact {
public:

  bool used;

  std::string FirstName;
  std::string LastName;
  std::string nickname;

  Contact(void);

  ~Contact(void);

  void add(void);
  void print(void) const;


private:

  std::string _login;
  std::string _postal_adress;
  std::string _email;
  std::string _phone_number;
  std::string _birth;
  std::string _favorite_meal;
  std::string _underwear_color;
  std::string _darkest_secret;

};

#endif
