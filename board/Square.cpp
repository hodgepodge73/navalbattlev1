//
// Created by Ethan Hodge on 2023-06-21.
//

#include "Square.h"

bool Square::hasShip() const {
	return this->ship;
}

bool Square::isShot() const {
	return this->shot;
}

void Square::setShip(bool s) {
	this->ship = s;
}

void Square::setShot(bool s) {
	this->ship = s;
}

Square::Square() {
	this->setShip(false);
	this->setShot(false);
}