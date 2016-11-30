/*
 * Capuccino.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_BEVERAGES_CAPUCCINO_H_
#define SRC_BEVERAGES_CAPUCCINO_H_


#include "../AbstractClasses/Beverage.h"

class Capuccino: public Beverage {
public:
	float cost();

	Capuccino();
	virtual ~Capuccino();
};

#endif /* SRC_BEVERAGES_CAPUCCINO_H_ */
