/*
 * NYPizzaStore.h
 *
 *  Created on: Nov 22, 2016
 *      Author: maciek
 */

#ifndef HEADERS_STORES_NYPIZZASTORE_H_
#define HEADERS_STORES_NYPIZZASTORE_H_

#include <PizzaStore.h>


class NYPizzaStore : public PizzaStore {
public:
	NYPizzaStore();
	~NYPizzaStore();

	Pizza* createPizza(PIZZATYPE);
};



#endif /* HEADERS_STORES_NYPIZZASTORE_H_ */
