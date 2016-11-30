/*
 * SimplePizzaFactory.h
 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#ifndef SRC_SIMPLEFACTORYCLASSES_SIMPLEPIZZAFACTORY_H_
#define SRC_SIMPLEFACTORYCLASSES_SIMPLEPIZZAFACTORY_H_

#include <iostream>

#include "../productsClasses/Pizza.h"
#include "../productsClasses/NYCheesePizza.h"
#include "../productsClasses/NYVeggiePizza.h"



class SimplePizzaFactory {
private:
	Pizza* pizza;
public:
	SimplePizzaFactory();
	virtual ~SimplePizzaFactory();

	Pizza& createPizza(const std::string);

};

#endif /* SRC_SIMPLEFACTORYCLASSES_SIMPLEPIZZAFACTORY_H_ */
