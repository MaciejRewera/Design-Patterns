/*
 * main.cpp

 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#include <iostream>


#include "includes.h"



int main() {

	SimplePizzaFactory factory;
	PizzaStore store = PizzaStore(factory);

	Pizza& pizza1 = store.orderPizza("cheese");
	std::cout << pizza1.getDescription() << std::endl;
	Pizza& pizza2 = store.orderPizza("veggie");
	std::cout << pizza2.getDescription() << std::endl;

}
