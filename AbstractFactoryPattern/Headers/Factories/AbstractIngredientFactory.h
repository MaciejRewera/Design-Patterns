/*
 * AbstractIngredientFactory.h
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#ifndef HEADERS_FACTORIES_ABSTRACTINGREDIENTFACTORY_H_
#define HEADERS_FACTORIES_ABSTRACTINGREDIENTFACTORY_H_

#include <Dough.h>
#include <Sauce.h>
#include <Cheese.h>
#include <Clams.h>


class AbstractIngredientFactory {

public:
	AbstractIngredientFactory() {}
	virtual ~AbstractIngredientFactory() {}

	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
	virtual Clams* createClams() = 0;

};



#endif /* HEADERS_FACTORIES_ABSTRACTINGREDIENTFACTORY_H_ */
