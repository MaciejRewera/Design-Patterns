/*
 * ClamPizza.h
 *
 *  Created on: Nov 22, 2016
 *      Author: maciek
 */

#ifndef HEADERS_PIZZAS_CLAMPIZZA_H_
#define HEADERS_PIZZAS_CLAMPIZZA_H_

#include <Pizza.h>
#include <AbstractIngredientFactory.h>

class ClamPizza : public Pizza {
public:
	ClamPizza(AbstractIngredientFactory*);
	~ClamPizza();

	void prepare();
};




#endif /* HEADERS_PIZZAS_CLAMPIZZA_H_ */
