/*
 * Macchiato.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_BEVERAGES_MACCHIATO_H_
#define SRC_BEVERAGES_MACCHIATO_H_


#include "../AbstractClasses/Beverage.h"

class Macchiato: public Beverage {
public:
	float cost();

	Macchiato();
	virtual ~Macchiato();
};

#endif /* SRC_BEVERAGES_MACCHIATO_H_ */
