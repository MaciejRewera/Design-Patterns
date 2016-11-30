/*
 * CheesePizza.h
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#ifndef HEADERS_PIZZAS_CHEESEPIZZA_H_
#define HEADERS_PIZZAS_CHEESEPIZZA_H_

#include <Pizza.h>
#include <AbstractIngredientFactory.h>

class CheesePizza : public Pizza {
public:
	CheesePizza(AbstractIngredientFactory*);
	~CheesePizza();

	void prepare();
};


#endif /* HEADERS_PIZZAS_CHEESEPIZZA_H_ */
