/*
 * Duck.cpp
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#include <iostream>

#include "Duck.h"

bool Duck::performFly() {
	if (this->flyBehaviour != NULL) {
		this->flyBehaviour->fly();
		return true;
	}
	else {
		std::cout << "No flyBehaviour defined!" << std::endl;
		return false;
	}
}

bool Duck::performQuack() {
	if (this->quackBehaviour != NULL) {
		this->quackBehaviour->quack();
		return true;
	}
	else {
		std::cout << "No quackBehaviour defined!" << std::endl;
		return false;
	}
}

