/*
 * CafeCreme.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_BEVERAGES_CAFECREME_H_
#define SRC_BEVERAGES_CAFECREME_H_

#include "../AbstractClasses/Beverage.h"


class CafeCreme: public Beverage {
public:
	float cost();

	CafeCreme();
	virtual ~CafeCreme();
};

#endif /* SRC_BEVERAGES_CAFECREME_H_ */
