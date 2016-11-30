/*
 * PizzaStore.h
 *
 *  Created on: Nov 22, 2016
 *      Author: maciek
 */

#ifndef HEADERS_PIZZAS_PIZZASTORE_H_
#define HEADERS_PIZZAS_PIZZASTORE_H_

#include <Pizza.h>
#include <PizzaTypes.h>
#include <AbstractIngredientFactory.h>

class PizzaStore {
protected:
	AbstractIngredientFactory* ingredientFactory;

public:
	PizzaStore();
	virtual ~PizzaStore();

	Pizza* orderPizza(PIZZATYPE);
	virtual Pizza* createPizza(PIZZATYPE) = 0;


};


#endif /* HEADERS_PIZZAS_PIZZASTORE_H_ */
