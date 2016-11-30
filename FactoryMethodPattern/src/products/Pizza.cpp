/*
 * Pizza.cpp
 *
 *  Created on: 16.11.2016
 *      Author: Maciek
 */

#include "Pizza.h"

Pizza::Pizza() : name(""), dough(""), sauce("") {
	// TODO Auto-generated constructor stub

}

Pizza::~Pizza() {
	std::cout << "-----Pizza Destructor-----" << std::endl;
//	for (Topping* t : toppings)
//		delete t;
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


/*********************GETTERS*********************/
std::string Pizza::getName() {
	return this->name;
}

std::string Pizza::getDough() {
	return this->dough;
}

std::string Pizza::getSauce() {
	return this->sauce;
}

std::string Pizza::getToppings() {
	std::string result = "";
	for (Topping t : this->toppings) {
		result += t.getName();
		result += ", ";
	}
	// Deleting the last ", " from the tail.
	result = result.substr(0, (result.size() - 2) );

	return result;
}



void Pizza::addTopping(Topping toppingToAdd) {
	this->toppings.push_back(toppingToAdd);
}











