/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkoehler <fkoehler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 18:38:17 by fkoehler          #+#    #+#             */
/*   Updated: 2018/01/14 14:42:19 by fkoehler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include "../includes/Game.class.hpp"
#include "../includes/Player.class.hpp"

int	updateEntities(Game &game) {
	game.pushEnemies(); // push current ennemies before adding some
	game.addEnemies();
	if (game.checkCollisions() == 1)
		return (1);
	game.pushProjectils();
	if (game.checkCollisions() == 1)
		return (1);
	return (0);
}

int		main(void) {
	Game			game;
	Player			player("Player1");
	int				input;
	struct timeval	tv;
	uint64_t		tenthsOfSec;

	game.initGame(&player);
	gettimeofday(&tv, NULL);
	tenthsOfSec = (tv.tv_sec * 10) + (tv.tv_usec / 100000); 
	while (1) {
		if (((input = wgetch(game.getWindow())) != ERR)
		&& player.handleInput(input) != -1)
			game.refresh();
		gettimeofday(&tv, NULL);
		if (((tv.tv_sec * 10) + (tv.tv_usec / 100000)) != tenthsOfSec) {
			tenthsOfSec = (tv.tv_sec * 10) + (tv.tv_usec / 100000);
			if (updateEntities(game) == 1)
				return (0);
			game.refresh();
		}
	}
	return 0;
}
