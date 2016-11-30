/*
 * main.cpp
 *
 *  Created on: 16.11.2016
 *      Author: Maciek
 */

#include <iostream>

#include "inclusions.h"


int main() {

	PizzaStore* NYStore = new NYPizzaStore();
	PizzaStore* chicagoStore = new ChicagoPizzaStore();

	Pizza* pizza = NYStore->orderPizza(CHEESE);
	std::cout << "Toppings: " << pizza->getToppings() << std::endl;
	Pizza* pizza2 = chicagoStore->orderPizza(VEGGIE);
	std::cout << "Toppings: " << pizza2->getToppings() << std::endl;


	delete NYStore;
	delete chicagoStore;
	delete pizza2;
	delete pizza;
}


