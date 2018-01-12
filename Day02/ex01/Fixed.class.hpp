/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:50:09 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/10 18:10:33 by qduperon         ###   ########.fr       */
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

Fixed &operator=(Fixed const & rhs);

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
