/*
 * PizzaStore.cpp
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#include "PizzaStore.h"

PizzaStore::PizzaStore() {
	// TODO Auto-generated constructor stub

}

PizzaStore::~PizzaStore() {
	// TODO Auto-generated destructor stub
}

Pizza* PizzaStore::orderPizza(PizzaType pizzaType) {
	Pizza* pizza = NULL;

	pizza = createPizza(pizzaType);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->pack();

	return pizza;
}


