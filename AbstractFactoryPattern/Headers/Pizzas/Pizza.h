/*
 * Pizza.h
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#ifndef HEADERS_PIZZAS_PIZZA_H_
#define HEADERS_PIZZAS_PIZZA_H_

#include <Dough.h>
#include <Sauce.h>
#include <Cheese.h>
#include <Clams.h>
#include <AbstractIngredientFactory.h>


class Pizza {
protected:
	std::string name;
	AbstractIngredientFactory* ingredientFactory;

	Dough* dough;
	Sauce* sauce;
	Cheese* cheese;
	Clams* clams;

public:
	Pizza();
	virtual ~Pizza();
	virtual void prepare() = 0;


	std::string getName();
	void setName(std::string);

	virtual void bake();
	virtual void cut();
	virtual void box();

};



#endif /* HEADERS_PIZZAS_PIZZA_H_ */
