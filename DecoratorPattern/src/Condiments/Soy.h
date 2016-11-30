/*
 * Soy.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_CONDIMENTS_SOY_H_
#define SRC_CONDIMENTS_SOY_H_

#include "../AbstractClasses/Beverage.h"
#include "../AbstractClasses/AbstractCondiment.h"


class Soy: public AbstractCondiment {
private:
	Beverage& beverage;
public:
	float cost();
	std::string getDescription();

	int getSize();

	Soy(Beverage&);
	virtual ~Soy();
};

#endif /* SRC_CONDIMENTS_SOY_H_ */
