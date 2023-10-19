//
// Created by Ethan Hodge on 2023-06-21.
//

#ifndef NAVAL_BOARD_H
#define NAVAL_BOARD_H

#define BOARD_SIZE 8

#include "Square.h"
#include <array>
using namespace std;

class Board {
private:
	array<array<Square, BOARD_SIZE>, BOARD_SIZE> board;
	int player;
public:
	array<array<Square, BOARD_SIZE>, BOARD_SIZE> getBoard();
	int getPlayer();
	void printBoard();
	Board(int);
};


#endif //NAVAL_BOARD_H
