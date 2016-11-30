/*
 * Quackable.h
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#ifndef CLASSES_QUACKABLE_H_
#define CLASSES_QUACKABLE_H_

class Quackable {
public:
	virtual void quack() = 0;

	virtual ~Quackable() {
		std::cout << "---Quackable Destructor---" << std::endl;
	}
};



#endif /* CLASSES_QUACKABLE_H_ */
