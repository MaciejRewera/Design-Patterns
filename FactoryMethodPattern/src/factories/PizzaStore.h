/*
 * PizzaStore.h
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#ifndef SRC_FACTORIES_PIZZASTORE_H_
#define SRC_FACTORIES_PIZZASTORE_H_

//#include "../inclusions.h"
#include "PizzaType.h"
#include "../products/Pizza.h"
#include "../products/NYStylePizzas/NYCheesePizza.h"
#include "../products/NYStylePizzas/NYVeggiePizza.h"
#include "../products/ChicagoStylePizzas/ChicagoCheesePizza.h"
#include "../products/ChicagoStylePizzas/ChicagoVeggiePizza.h"


class PizzaStore {
public:
	PizzaStore();
	virtual ~PizzaStore();

	virtual Pizza* orderPizza(PizzaType);
	virtual Pizza* createPizza(PizzaType) = 0;

};

#endif /* SRC_FACTORIES_PIZZASTORE_H_ */
