//
// Created by Ethan Hodge on 2023-06-21.
//

#ifndef NAVAL_MANAGER_H
#define NAVAL_MANAGER_H

#define NUM_OF_SHIPS 5

#include "../board/Board.h"
#include "Ship.h"
#include <stdexcept>


class Manager {
	enum shotScenario { miss, hit, alreadyShot };
private:
	enum  player { p1 = true, p2 = false } turn;
	Board p1Board;
	Board p2Board;
	//array<Ship, NUM_OF_SHIPS> ships;
	void makeShips(array<int, NUM_OF_SHIPS>);
	shotScenario makeMove(pair<int, int>);
	shotScenario makeTurn(pair<int, int>, Board playerBoard);
	void playerSetup(Board);
public:
	void startGame();
	Manager(Board p1Board, Board p2Board);
};


#endif //NAVAL_MANAGER_H
