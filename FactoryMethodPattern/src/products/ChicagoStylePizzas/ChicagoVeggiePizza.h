/*
 * ChicagoVeggiePizza.h
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#ifndef SRC_PRODUCTS_CHICAGOSTYLEPIZZAS_CHICAGOVEGGIEPIZZA_H_
#define SRC_PRODUCTS_CHICAGOSTYLEPIZZAS_CHICAGOVEGGIEPIZZA_H_

#include "../Pizza.h"


class ChicagoVeggiePizza: public Pizza {
public:
	ChicagoVeggiePizza();
	virtual ~ChicagoVeggiePizza();

	void cut();
};

#endif /* SRC_PRODUCTS_CHICAGOSTYLEPIZZAS_CHICAGOVEGGIEPIZZA_H_ */
