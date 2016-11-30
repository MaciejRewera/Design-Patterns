/*
 * Flyable.h
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#ifndef CLASSES_FLYABLE_H_
#define CLASSES_FLYABLE_H_

class Flyable {
public:
	virtual void fly() = 0;

	virtual ~Flyable() {
		std::cout << "---Flyable Destructor---" << std::endl;
	}
};



#endif /* CLASSES_FLYABLE_H_ */
