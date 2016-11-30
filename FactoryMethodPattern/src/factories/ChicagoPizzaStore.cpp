/*
 * ChicagoPizzaStore.cpp
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#include "ChicagoPizzaStore.h"

ChicagoPizzaStore::ChicagoPizzaStore() {
	// TODO Auto-generated constructor stub

}

ChicagoPizzaStore::~ChicagoPizzaStore() {
	// TODO Auto-generated destructor stub
}


Pizza* ChicagoPizzaStore::createPizza(PizzaType pizzaType) {
	Pizza* pizza = NULL;

	if (pizzaType == CHEESE)
		pizza = new ChicagoCheesePizza();
	else if (pizzaType == VEGGIE)
		pizza = new ChicagoVeggiePizza();
	else
		pizza = NULL;

	return pizza;
}
