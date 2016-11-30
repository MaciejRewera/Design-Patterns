/*
 * Pizza.cpp
 *
 *  Created on: 15.11.2016
 *      Author: Maciek
 */

#include "Pizza.h"

Pizza::Pizza() {
	// TODO Auto-generated constructor stub

}

Pizza::~Pizza() {
	// TODO Auto-generated destructor stub
}

void Pizza::prepare() {
	std::cout << "Preparing " << this->name << std::endl;
	std::cout << "Tossing " << this->dough << std::endl;
	std::cout << "Adding " << this->sauce << std::endl;
}

void Pizza::bake() {
	std::cout << "Bake for 15 minutes at 180.\n";
}

void Pizza::cut() {
	std::cout << "Cutting pizza into diagonal slices.\n";
}

void Pizza::pack() {
	std::cout << "Packing pizza into official PizzaStore box.\n";
}

