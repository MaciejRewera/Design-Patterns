/*
 * NYPizzaStore.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: maciek
 */

#include <NYPizzaStore.h>
#include <NYPizzaIngredientFactory.h>

#include <CheesePizza.h>
#include <ClamPizza.h>



NYPizzaStore::NYPizzaStore() {
	this->ingredientFactory = new NYPizzaIngredientFactory();
}

NYPizzaStore::~NYPizzaStore() {
	std::cout << "-----NY PIZZASTORE DESTRUCTOR-----" << std::endl;
}

Pizza* NYPizzaStore::createPizza(PIZZATYPE type) {
	Pizza* pizza = NULL;

	if (type == CHEESE) {
		pizza = new CheesePizza(this->ingredientFactory);
		pizza->setName("NY Cheese Pizza");
	}
	else if (type == CLAM) {
		pizza = new ClamPizza(this->ingredientFactory);
		pizza->setName("NY Clam Pizza");
	}


	return pizza;
}


