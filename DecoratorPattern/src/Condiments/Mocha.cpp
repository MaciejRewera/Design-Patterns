/*
 * Mocha.cpp
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#include "Mocha.h"

Mocha::Mocha(Beverage& beverage) : beverage(beverage) {
//	this->beverage = beverage;
}

Mocha::~Mocha() {
	// TODO Auto-generated destructor stub
}


int Mocha::getSize() {
	return beverage.getSize();
}

float Mocha::cost() {
	float cost = beverage.cost();
	if (getSize() == SMALL)
		cost += 0.10;
	else if (getSize() == MEDIUM)
		cost += 0.20;
	else if (getSize() == LARGE)
		cost += 0.30;

	return cost;
}

std::string Mocha::getDescription() {
	return this->beverage.getDescription() + ", mocha";
}
