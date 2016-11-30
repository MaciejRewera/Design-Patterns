/*
 * PizzaStore.h
 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#ifndef SRC_CLIENTSCLASSES_PIZZASTORE_H_
#define SRC_CLIENTSCLASSES_PIZZASTORE_H_


#include <iostream>


#include "../productsClasses/Pizza.h"
#include "../simpleFactoryClasses/SimplePizzaFactory.h"


class PizzaStore {
private:
	SimplePizzaFactory& factory;

public:
	PizzaStore(SimplePizzaFactory&);
	virtual ~PizzaStore();


	Pizza& orderPizza(const std::string);

};

#endif /* SRC_CLIENTSCLASSES_PIZZASTORE_H_ */
