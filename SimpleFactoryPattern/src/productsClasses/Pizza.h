/*
 * Pizza.h
 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#ifndef SRC_PRODUCTSCLASSES_PIZZA_H_
#define SRC_PRODUCTSCLASSES_PIZZA_H_

#include <iostream>



class Pizza {
protected:
	std::string name;
	std::string dough;
	std::string sauce;

public:
	Pizza();
	virtual ~Pizza();

	virtual std::string getDescription() = 0;

	void prepare();
	void bake();
	void cut();
	void pack();
};

#endif /* SRC_PRODUCTSCLASSES_PIZZA_H_ */
