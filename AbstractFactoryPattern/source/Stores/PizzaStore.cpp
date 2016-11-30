/*
 * PizzaStore.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: maciek
 */

#include <PizzaStore.h>


PizzaStore::PizzaStore() : ingredientFactory(NULL) {

}

PizzaStore::~PizzaStore() {
	std::cout << "-----PIZZASTORE DESTRUCTOR-----" << std::endl;
	delete this->ingredientFactory;
}


Pizza* PizzaStore::orderPizza(PIZZATYPE type) {
	Pizza* pizza = NULL;

	pizza = createPizza(type);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}


