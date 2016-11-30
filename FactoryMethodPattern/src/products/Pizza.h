/*
 * Pizza.h
 *
 *  Created on: 16.11.2016
 *      Author: Maciek
 */

#ifndef PRODUCTS_PIZZA_H_
#define PRODUCTS_PIZZA_H_

#include <iostream>
#include <vector>

#include "../pizzaToppings/toppingsInclusions.h"


class Pizza {
protected:
	std::string name;
	std::string dough;
	std::string sauce;
	std::vector<Topping> toppings;

public:
	Pizza();
	virtual ~Pizza();


	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void pack();


	std::string getName();
	std::string getDough();
	std::string getSauce();
	std::string getToppings();

	void addTopping(Topping);

};

#endif /* PRODUCTS_PIZZA_H_ */
