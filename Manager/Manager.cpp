//
// Created by Ethan Hodge on 2023-06-21.
//

#include "Manager.h"

Manager::shotScenario Manager::makeMove(pair<int, int> coord) {
	if (coord.first < 0 || coord.first > 7 || coord.second < 0 || coord.second > 0) {
		throw std::invalid_argument("location invalid try again\n");
	}

	return (turn == p1) ? Manager::makeTurn(coord, p1Board) : makeTurn(coord, p2Board);
}

Manager::shotScenario Manager::makeTurn(pair<int, int> coord, Board playerBoard) {
	if (playerBoard.getBoard()[coord.first][coord.second].isShot()){
		return alreadyShot;
	}
	if (playerBoard.getBoard()[coord.first][coord.second].hasShip()){
		playerBoard.getBoard()[coord.first][coord.second].setShot(true);
		return hit;
	}
	else {
		playerBoard.getBoard()[coord.first][coord.second].setShot(true);
		return miss;
	}
}

void Manager::playerSetup(Board playerBoard) {
	// code for players choosing their placement can go here
	playerBoard.getBoard().at(0).at(0).setShip(true);
	playerBoard.getBoard().at(0).at(0).setShot(false);
	playerBoard.getBoard().at(0).at(1).setShip(true);
	playerBoard.getBoard().at(0).at(1).setShot(false);
	playerBoard.getBoard().at(0).at(2).setShip(true);
	playerBoard.getBoard().at(0).at(2).setShot(false);
	playerBoard.getBoard().at(3).at(5).setShip(true);
	playerBoard.getBoard().at(3).at(5).setShot(false);
	playerBoard.getBoard().at(3).at(6).setShip(true);
	playerBoard.getBoard().at(3).at(6).setShot(false);
	playerBoard.getBoard().at(4).at(0).setShip(true);
	playerBoard.getBoard().at(4).at(0).setShot(false);
}

void Manager::makeShips(array<int, NUM_OF_SHIPS>) {
	// make the ship lengths - could be hardcoded
}

void Manager::startGame() {
	playerSetup(this->p1Board);
	playerSetup(this->p2Board);
	bool turn = false; // false p1, true p2
	bool game = true;
	while (game) {
		// print board and player then get move do move and print board
		printf("Player %d's turn: \n", turn ? 2 : 1);
		if (turn) {
			this->p2Board.printBoard();
		}
		else {
			this->p1Board.printBoard();
		}
		int x, y;
		printf("Enter your x and y coordinates: \n");
		scanf("%d", &x);
		scanf("%d", &y);
		turn = !turn;
	}
}

Manager::Manager(Board p1, Board p2) : p1Board(1), p2Board(2) {
	this->p2Board = p2;
	this->p1Board = p1;
}
