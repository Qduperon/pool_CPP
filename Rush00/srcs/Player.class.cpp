/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkoehler <fkoehler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 10:03:08 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/14 14:48:20 by fkoehler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Player.class.hpp"
#include "../includes/Game.class.hpp"
#include "../includes/Projectil.class.hpp"

//construtor + Destructor
Player::Player(void) {
  this->_Name = "Unknown";
  this->pX = 0;
  this->pY = 0;
  this->_HP = 1;
  this->pSprite = 'O';
  this->_projectils = new Projectil*[NB_CELL];
}
Player::~Player(void) {
  Projectil **projectils = this->getProjectils();

 	for (size_t i = 0; projectils[i] != NULL; i++) {
		delete projectils[i];
	}
	delete [] projectils;
}

Player::Player(std::string name) {
  this->_Name = name;
  this->pX = 0;
  this->pY = 0;
  this->_HP = 1;
  this->pSprite = 'O';
  this->_projectils = new Projectil*[NB_CELL];
}
Player::Player(Player const &src) { *this = src; }

//operator
Player &Player::operator=(Player const &rhs)
{
  this->_Name = rhs.getName();
  this->pX = rhs.getX();
  this->pY = rhs.getY();
  this->_HP = rhs.getHP();
  return *this;
}

int        Player::handleInput(int input)
{
    int i = 0;
    if (input != KEY_LEFT && input != KEY_RIGHT && input != ' ')
      return (-1);
    if (input == KEY_RIGHT && this->getX() < MAP_SIZE - 3)
      this->setX(this->getX() + 1);
    else if (input == KEY_LEFT && this->getX() > 0)
      this->setX(this->getX() - 1);
    else if (input == ' ') {
      while (i < NB_CELL && this->_projectils[i] != NULL && this->_projectils[i]->getY() > -1)
        i++;
      if (i == NB_CELL) return (-1);
      if (this->_projectils[i] == NULL)
        this->_projectils[i] = new Projectil(this->getX(), this->getY());
      else {
        this->_projectils[i]->setX(this->getX());
        this->_projectils[i]->setY(this->getY() - 1);
      }
    }
    return (0);
  }

//Gets
std::string Player::getName(void) const { return this->_Name; }
int         Player::getHP(void) const { return this->_HP; }
Projectil   **Player::getProjectils(void) const { return this->_projectils; }

//Heritage
void Player::movement(void) {}
