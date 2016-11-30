/*
 * Beverage.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_ABSTRACTCLASSES_BEVERAGE_H_
#define SRC_ABSTRACTCLASSES_BEVERAGE_H_

#include <string>


enum sizes
		{SMALL = 1, MEDIUM = 2, LARGE = 3};


class Beverage {
public:
	sizes size;
	std::string description;


	Beverage() : size(MEDIUM), description("") {}
	virtual ~Beverage() {}


	virtual std::string getDescription() {
		std::string result = "";
		if (this->size == SMALL)
			result = "Small ";
		else if (this->size == MEDIUM)
			result = "Medium ";
		else if (this->size == LARGE)
			result = "Large ";

		result += this->description;
		return result;
	}

	virtual float cost() = 0;

	virtual int getSize() {
		return this->size;
	}

	virtual bool setSize(sizes aSize) {
		if ((aSize > 0) && (aSize < 4)) {
			this->size = aSize;
			return true;
		}

		return false;
	}

};



#endif /* SRC_ABSTRACTCLASSES_BEVERAGE_H_ */
