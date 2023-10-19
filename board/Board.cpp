//
// Created by Ethan Hodge on 2023-06-21.
//

#include "Board.h"

array<array<Square, 8>, 8> Board::getBoard() {
	return this->board;
}

int Board::getPlayer() {
	return this->player;
}

void Board::printBoard() {
	for (int i = 0; i < this->getBoard().size(); i++) {
		for (int j = 0; j < this->getBoard().size(); j++) {
			if (this->getBoard().at(i).at(j).hasShip()) {
				if (this->getBoard().at(i).at(j).isShot()) {
					printf(" S ");
				}
				else {
					printf(" B ");
				}
			}
				printf(" - ");
		}
		printf("\n");
	}
	printf("\n");
}

Board::Board(int p) {
	this->player = p;

}
