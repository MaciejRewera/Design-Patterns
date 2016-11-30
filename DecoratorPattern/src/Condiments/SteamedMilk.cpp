/*
 * SteamedMilk.cpp
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#include "SteamedMilk.h"

SteamedMilk::SteamedMilk(Beverage& beverage) : beverage(beverage) {
//	this->beverage = beverage;
}

SteamedMilk::~SteamedMilk() {
	// TODO Auto-generated destructor stub
}


int SteamedMilk::getSize() {
	return beverage.getSize();
}

float SteamedMilk::cost() {
	float cost = beverage.cost();
	if (getSize() == SMALL)
		cost += 0.05;
	else if (getSize() == MEDIUM)
		cost += 0.10;
	else if (getSize() == LARGE)
		cost += 0.20;

	return cost;
}

std::string SteamedMilk::getDescription() {
	return this->beverage.getDescription() + ", steamed milk";
}
