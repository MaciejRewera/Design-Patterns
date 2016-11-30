/*
 * Quack.h
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#ifndef CLASSES_QUACKBEHAVIOURS_QUACK_H_
#define CLASSES_QUACKBEHAVIOURS_QUACK_H_

#include <iostream>

#include "Quackable.h"


class Quack : public Quackable {
public:
	void quack() {
		std::cout << "Quack, quack!" << std::endl;
	}

	~Quack() {
		std::cout << "---Quack Destructor---" << std::endl;
	}
};


#endif /* CLASSES_QUACKBEHAVIOURS_QUACK_H_ */
