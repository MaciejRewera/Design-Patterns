/*
 * AbstractCondiment.h
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#ifndef SRC_ABSTRACTCLASSES_ABSTRACTCONDIMENT_H_
#define SRC_ABSTRACTCLASSES_ABSTRACTCONDIMENT_H_

#include "Beverage.h"


class AbstractCondiment : public Beverage {
	std::string getDescription() = 0;
};



#endif /* SRC_ABSTRACTCLASSES_ABSTRACTCONDIMENT_H_ */
