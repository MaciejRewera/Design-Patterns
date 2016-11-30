/*
 * SteamedMilk.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_CONDIMENTS_STEAMEDMILK_H_
#define SRC_CONDIMENTS_STEAMEDMILK_H_

#include "../AbstractClasses/Beverage.h"
#include "../AbstractClasses/AbstractCondiment.h"


class SteamedMilk: public AbstractCondiment {
private:
	Beverage& beverage;
public:
	float cost();
	std::string getDescription();

	int getSize();

	SteamedMilk(Beverage&);
	virtual ~SteamedMilk();
};

#endif /* SRC_CONDIMENTS_STEAMEDMILK_H_ */
