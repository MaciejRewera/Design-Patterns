/*
 * PizzaStore.cpp
 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory& _factory) : factory(_factory) {
	// TODO Auto-generated constructor stub

}

PizzaStore::~PizzaStore() {
	// TODO Auto-generated destructor stub
}


Pizza& PizzaStore::orderPizza(const std::string pizzaType) {

	Pizza& pizza = this->factory.createPizza(pizzaType);

	pizza.prepare();
	pizza.bake();
	pizza.cut();
	pizza.pack();

	return pizza;
}

