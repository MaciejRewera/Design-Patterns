/*
 * FlyNoWay.h
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#ifndef CLASSES_FLYBEHAVIOURS_FLYNOWAY_H_
#define CLASSES_FLYBEHAVIOURS_FLYNOWAY_H_

#include <iostream>

#include "Flyable.h"


class FlyNoWay : public Flyable {
public:
	void fly() {
		std::cout << "I don't know how to fly." << std::endl;
	}

	~FlyNoWay() {}

};



#endif /* CLASSES_FLYBEHAVIOURS_FLYNOWAY_H_ */
