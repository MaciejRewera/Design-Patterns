/*
 * NYPizzaStore.h
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#ifndef SRC_FACTORIES_NYPIZZASTORE_H_
#define SRC_FACTORIES_NYPIZZASTORE_H_

#include "PizzaStore.h"


class NYPizzaStore: public PizzaStore {
public:
	NYPizzaStore();
	virtual ~NYPizzaStore();

	Pizza* createPizza(PizzaType);
};

#endif /* SRC_FACTORIES_NYPIZZASTORE_H_ */
