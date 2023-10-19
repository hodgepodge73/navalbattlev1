//
// Created by Ethan Hodge on 2023-06-21.
//

#ifndef NAVAL_SHIP_H
#define NAVAL_SHIP_H

#include <string>

class Ship {
private:
	int length;
public:
	int getLength() const{
		return length;
	}

	explicit Ship(int l){
		length = l;
	}

};


#endif //NAVAL_SHIP_H
