/*
 * Soy.cpp
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#include "Soy.h"

Soy::Soy(Beverage& beverage) : beverage(beverage) {
//	this->beverage = beverage;
}

Soy::~Soy() {
	// TODO Auto-generated destructor stub
}


int Soy::getSize() {
	return beverage.getSize();
}

float Soy::cost() {
	float cost = beverage.cost();
	if (getSize() == SMALL)
		cost += 0.10;
	else if (getSize() == MEDIUM)
		cost += 0.15;
	else if (getSize() == LARGE)
		cost += 0.25;

	return cost;
}

std::string Soy::getDescription() {
	return this->beverage.getDescription() + ", soy";
}
