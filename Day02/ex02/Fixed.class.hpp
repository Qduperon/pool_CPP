/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:50:09 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/11 11:09:00 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:

Fixed(void);
Fixed (int const i);
Fixed (float const f);
~Fixed(void);
Fixed(Fixed const &src);

//comparison operator
bool operator>(Fixed const & rhs) const;
bool operator<(Fixed const & rhs) const;
bool operator>=(Fixed const & rhs) const;
bool operator<=(Fixed const & rhs) const;
bool operator==(Fixed const & rhs) const;
bool operator!=(Fixed const & rhs) const;

//Arithmetic operator
Fixed &operator=(Fixed const & rhs);
Fixed &operator+(Fixed const & rhs);
Fixed &operator-(Fixed const & rhs);
Fixed &operator*(Fixed const & rhs);
Fixed &operator/(Fixed const & rhs);

//post operator
Fixed        &operator++(void);
Fixed        &operator--(void);

//pre operator
Fixed        operator++(int value);
Fixed        operator--(int value);

//non const min/max
static Fixed &min(Fixed &value1, Fixed &value2);
static Fixed &max (Fixed &value1, Fixed &value2);

//const min/max
static Fixed const &min(Fixed const &value1, Fixed const &value2);
static Fixed const &max(Fixed const &value1, Fixed const &value2);

float toFloat( void ) const;
int toInt( void ) const;
int getRawBits(void) const;
void setRawBits(int const raw);



private:

  int               _fixed;
  static const int  _fixedConst;

};

std::ostream &operator<<(std::ostream &o, Fixed const &i);


#endif
