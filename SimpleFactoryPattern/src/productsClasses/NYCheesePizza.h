/*
 * NYChessePizza.h
 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#ifndef SRC_PRODUCTSCLASSES_NYCHEESEPIZZA_H_
#define SRC_PRODUCTSCLASSES_NYCHEESEPIZZA_H_

#include "Pizza.h"

class NYCheesePizza: public Pizza {
public:
	NYCheesePizza();
	virtual ~NYCheesePizza();


	std::string getDescription() {
		std::string str = "";
		str += this->name;
		str += " with ";
		str += this->dough;
		str += " and ";
		str += this->sauce;
		str += ".\n";

		return str;
	}

};

#endif /* SRC_PRODUCTSCLASSES_NYCHEESEPIZZA_H_ */
