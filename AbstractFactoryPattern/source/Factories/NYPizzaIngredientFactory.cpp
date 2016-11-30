/*
 * NYPizzaIngredientFactory.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#include <NYPizzaIngredientFactory.h>
#include <FreshClams.h>
#include <MarinaraSauce.h>
#include <ReggianoCheese.h>
#include <ThinCrustDough.h>


Dough* NYPizzaIngredientFactory::createDough() {
	return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce() {
	return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese() {
	return new ReggianoCheese();
}

Clams* NYPizzaIngredientFactory::createClams() {
	return new FreshClams();
}

