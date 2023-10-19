//
// Created by Ethan Hodge on 2023-06-21.
//

#ifndef NAVAL_SQUARE_H
#define NAVAL_SQUARE_H


class Square {
private:
	bool shot;
	bool ship;
public:
	bool hasShip() const;
	void setShip(bool s);
	void setShot(bool s);
	bool isShot() const;
	Square();
};


#endif //NAVAL_SQUARE_H
