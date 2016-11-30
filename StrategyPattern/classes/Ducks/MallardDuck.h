/*
 * MallardDuck.h
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#ifndef CLASSES_DUCKS_MALLARDDUCK_H_
#define CLASSES_DUCKS_MALLARDDUCK_H_

#include <iostream>

#include "Duck.h"


class MallardDuck : public Duck {
public:
	void display() {
		std::cout << "Looks like a Mallard!" << std::endl;
	}

	~MallardDuck() {
		std::cout << "---MallardDuck Destructor---" << std::endl;
	}

};


#endif /* CLASSES_DUCKS_MALLARDDUCK_H_ */
