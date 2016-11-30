/*
 * FlyWithWings.h
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#ifndef CLASSES_FLYBEHAVIOURS_FLYWITHWINGS_H_
#define CLASSES_FLYBEHAVIOURS_FLYWITHWINGS_H_

#include <iostream>

#include "Flyable.h"


class FlyWithWings : public Flyable {
public:
	void fly() {
		std::cout << "I'm flying with wings!" << std::endl;
	}

	~FlyWithWings() {
		std::cout << "---FlyWithWings Destructor---" << std::endl;
	}

};



#endif /* CLASSES_FLYBEHAVIOURS_FLYWITHWINGS_H_ */
