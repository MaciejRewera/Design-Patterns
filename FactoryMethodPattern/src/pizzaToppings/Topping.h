/*
 * Topping.h
 *
 *  Created on: 16.11.2016
 *      Author: Maciek
 */

#ifndef PIZZATOPPINGS_TOPPING_H_
#define PIZZATOPPINGS_TOPPING_H_

#include <iostream>


class Topping {
protected:
	std::string name;
public:
	Topping();
	virtual ~Topping();

	std::string getName();
};

#endif /* PIZZATOPPINGS_TOPPING_H_ */
