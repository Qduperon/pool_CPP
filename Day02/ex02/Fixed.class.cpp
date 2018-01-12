/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:49:11 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 13:06:12 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.class.hpp"

const int Fixed::_fixedConst = 8;

Fixed::Fixed(void) : _fixed(0)
{
  // std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const i) : _fixed(roundf(i * (1 << _fixedConst)))
{
  // std::cout << "Int constructor called" << std::endl;
  return;
}

Fixed::Fixed(float const f) : _fixed(roundf(f * (1 << _fixedConst)))
{
  // std::cout << "Float constructor called" << std::endl;
  return;
}

Fixed::~Fixed(void)
{
  // std::cout << "Destructor called" << std::endl;
  return;
}

Fixed::Fixed(Fixed const &src)
{
  // std::cout << "Copy constructor called" << std::endl;
  *this = src;
  return;
}

void Fixed::setRawBits(int const raw){ this->_fixed = raw; }

//Gets
int Fixed::getRawBits(void) const {
  // std::cout << "getRawBits member function called" <<std::endl;
  return this->_fixed;
}

// Comparison Operator
bool Fixed::operator>(Fixed const &rhs) const
{
  if (this->_fixed > rhs.getRawBits())
    return (true);
  else
    return (false);
}

bool Fixed::operator<(Fixed const &rhs) const
{
  if (this->_fixed < rhs.getRawBits())
    return (true);
  else
    return (false);
}

bool Fixed::operator>=(Fixed const &rhs) const
{
  if (this->_fixed >= rhs.getRawBits())
    return (true);
  else
    return (false);
}

bool Fixed::operator<=(Fixed const &rhs) const
{
  if (this->_fixed > rhs.getRawBits())
    return (true);
  else
    return (false);
}

bool Fixed::operator==(Fixed const &rhs) const
{
  if (this->_fixed == rhs.getRawBits())
    return (true);
  else
    return (false);
}

bool Fixed::operator!=(Fixed const &rhs) const
{
  if (this->_fixed != rhs.getRawBits())
    return (true);
  else
    return (false);
}

//  Arithmetic Operator
Fixed &Fixed::operator=(Fixed const &rhs)
{
  // std::cout << "Assignation operator called" << std::endl;
      this->_fixed = rhs.getRawBits();
    return *this;
}

Fixed &Fixed::operator+(Fixed const &rhs)
{
      this->_fixed += rhs.getRawBits();
    return *this;
}

Fixed &Fixed::operator-(Fixed const &rhs)
{
      this->_fixed -= rhs.getRawBits();
    return *this;
}

Fixed &Fixed::operator*(Fixed const &rhs)
{
      this->_fixed *= rhs.toFloat();
    return *this;
}

Fixed &Fixed::operator/(Fixed const &rhs)
{
      this->_fixed /= rhs.toFloat();
    return *this;
}

// post Operator
Fixed        &Fixed::operator++(void)
{
    this->_fixed++;
    return *this;
}

Fixed        &Fixed::operator--(void)
{
    this->_fixed--;
    return *this;
}

// pre Operator
Fixed        Fixed::operator++(int value)
{
    (void)value;
    Fixed    tmp(*this);

    this->_fixed++;
    return (tmp);
}

Fixed        Fixed::operator--(int value)
{
    (void)value;
    Fixed    tmp(*this);

    this->_fixed--;
    return (tmp);
}

// the non const min/max
Fixed &Fixed::min(Fixed &value1, Fixed &value2)
{
  if (value1 > value2)
    return value2;
  else
    return value1;
}

Fixed &Fixed::max(Fixed &value1, Fixed &value2)
{
  if (value1 > value2)
    return value1;
  else
    return value2;
}

//const min/max
Fixed const &Fixed::min(Fixed const &value1, Fixed const &value2)
{
  if (value1 > value2)
    return value2;
  else
    return value1;
}

Fixed const &Fixed::max(Fixed const &value1, Fixed const &value2)
{
  if (value1 > value2)
    return value1;
  else
    return value2;
}

float Fixed::toFloat(void) const
{
  return ((float)this->_fixed / (1 << _fixedConst));
}

int Fixed::toInt(void) const
{
  return (this->_fixed / (1 << _fixedConst));
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
  o << i.toFloat();
  return o;
}
