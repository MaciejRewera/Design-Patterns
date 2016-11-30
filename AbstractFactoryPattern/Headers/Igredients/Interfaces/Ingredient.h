/*
 * Ingredient.h
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#ifndef HEADERS_INGREDIENTS_INTERFACES_INGREDIENT_H
#define HEADERS_INGREDIENTS_INTERFACES_INGREDIENT_H

#include <iostream>


class Ingredient {
public:
	Ingredient() {}
	virtual ~Ingredient() {}

	virtual void displayDescription() = 0;
};


#endif /* HEADERS_INGREDIENTS_INTERFACES_INGREDIENT_H_ */
