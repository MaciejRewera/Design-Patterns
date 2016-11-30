/*
 * ChicagoCheesePizza.cpp
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#include "ChicagoCheesePizza.h"

ChicagoCheesePizza::ChicagoCheesePizza() {
	this->name = "Chicago Style Cheese Pizza";
	this->dough = "Thick Dough";
	this->sauce = "Plum Tomato Sauce";

	this->addTopping(Cheese());
	this->addTopping(SchwartzwaldHam());
	this->addTopping(SweetPaprika());
}

ChicagoCheesePizza::~ChicagoCheesePizza() {
	// TODO Auto-generated destructor stub
}


