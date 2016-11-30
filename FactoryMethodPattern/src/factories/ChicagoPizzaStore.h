/*
 * ChicagoPizzaStore.h
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#ifndef SRC_FACTORIES_CHICAGOPIZZASTORE_H_
#define SRC_FACTORIES_CHICAGOPIZZASTORE_H_

#include "PizzaStore.h"

class ChicagoPizzaStore: public PizzaStore {
public:
	ChicagoPizzaStore();
	virtual ~ChicagoPizzaStore();

	Pizza* createPizza(PizzaType);
};

#endif /* SRC_FACTORIES_CHICAGOPIZZASTORE_H_ */
