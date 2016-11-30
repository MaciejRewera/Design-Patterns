/*
 * Espresso.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_BEVERAGES_ESPRESSO_H_
#define SRC_BEVERAGES_ESPRESSO_H_

#include "../AbstractClasses/Beverage.h"

class Espresso: public Beverage {
public:
	float cost();

	Espresso();
	virtual ~Espresso();
};

#endif /* SRC_BEVERAGES_ESPRESSO_H_ */
