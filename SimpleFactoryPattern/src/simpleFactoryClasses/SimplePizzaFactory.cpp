/*
 * SimplePizzaFactory.cpp
 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#include "SimplePizzaFactory.h"

SimplePizzaFactory::SimplePizzaFactory() {
	this->pizza = NULL;
}

SimplePizzaFactory::~SimplePizzaFactory() {
	delete this->pizza;
}


Pizza& SimplePizzaFactory::createPizza(const std::string pizzaType) {
	if (pizzaType == "cheese")
		this->pizza = new NYCheesePizza();
	else if (pizzaType == "veggie")
		this->pizza = new NYVeggiePizza();

	Pizza& resultPizza = *(this->pizza);
	this->pizza = NULL;
	return resultPizza;
}
