/*
 * NYPizzaStore.cpp
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#include "NYPizzaStore.h"

NYPizzaStore::NYPizzaStore() {
	// TODO Auto-generated constructor stub

}

NYPizzaStore::~NYPizzaStore() {
	// TODO Auto-generated destructor stub
}


Pizza* NYPizzaStore::createPizza(PizzaType pizzaType) {
	Pizza* pizza = NULL;

	if (pizzaType == CHEESE)
		pizza = new NYCheesePizza();
	else if (pizzaType == VEGGIE)
		pizza = new NYVeggiePizza();
	else
		pizza = NULL;

	return pizza;
}
