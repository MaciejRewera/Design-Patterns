/*
 * main.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#include <iostream>


#include <AbstractIngredientFactory.h>
#include <Pizza.h>
#include <PizzaStore.h>
#include <NYPizzaStore.h>


int main() {
	std::cout << "_____S T A R T_____" << std::endl;

	PizzaStore& nyPizzaStore = *(new NYPizzaStore() );
	Pizza& cheesePizza = *(nyPizzaStore.orderPizza(CHEESE) );
	Pizza& clamPizza = *(nyPizzaStore.orderPizza(CLAM) );


	delete &clamPizza;
	delete &cheesePizza;
	delete &nyPizzaStore;

	std::cout << "_______E N D_______" << std::endl;
}
