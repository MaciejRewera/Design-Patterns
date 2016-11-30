/*
 * Mocha.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_CONDIMENTS_MOCHA_H_
#define SRC_CONDIMENTS_MOCHA_H_

#include "../AbstractClasses/Beverage.h"
#include "../AbstractClasses/AbstractCondiment.h"


class Mocha: public AbstractCondiment {
private:
	Beverage& beverage;
public:
	float cost();
	std::string getDescription();

	int getSize();

	Mocha(Beverage&);
	virtual ~Mocha();
};

#endif /* SRC_CONDIMENTS_MOCHA_H_ */
