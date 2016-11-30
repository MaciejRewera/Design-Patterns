/*
 * NYPizzaIngredientFactory.h
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#ifndef HEADERS_IGREDIENTS_INTERFACES_NYPIZZAINGREDIENTFACTORY_H_
#define HEADERS_IGREDIENTS_INTERFACES_NYPIZZAINGREDIENTFACTORY_H_

#include <AbstractIngredientFactory.h>

class NYPizzaIngredientFactory : public AbstractIngredientFactory {

public:
	Dough* createDough();
	Sauce* createSauce();
	Cheese* createCheese();
	Clams* createClams();

};



#endif /* HEADERS_IGREDIENTS_INTERFACES_NYPIZZAINGREDIENTFACTORY_H_ */
