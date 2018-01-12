/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:49:11 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/10 15:16:55 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.class.hpp"

const int Fixed::_fixedConst = 8;

Fixed::Fixed(void) : _fixed(0)
{
  std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
  return;
}

Fixed::Fixed(Fixed const &src)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
  return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
  std::cout << "Assignation operator called" << std::endl;
      this->_fixed = rhs.getRawBits();
    return *this;
}


void Fixed::setRawBits(int const raw){ this->_fixed = raw; }

//Gets
int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" <<std::endl;
  return this->_fixed;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
  o << i.getRawBits();
  return o;
}
