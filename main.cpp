//
// Created by Ethan Hodge on 2023-06-21.
//
#include <stdio.h>
#include "Manager/Manager.h"

int main() {
	printf("Welcome to Naval Battle!\n");
	Manager game(Board(1), Board(2));
	game.startGame();
	return 0;
}