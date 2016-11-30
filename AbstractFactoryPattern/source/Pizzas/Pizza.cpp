/*
 * Pizza.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#include <Pizza.h>

Pizza::Pizza() : ingredientFactory(NULL), dough(NULL), sauce(NULL), cheese(NULL), clams(NULL) {}

Pizza::~Pizza() {
	std::cout << "-----PIZZA DESTRUCTOR-----" << std::endl;

	delete ingredientFactory;
	delete dough;
	delete sauce;
	delete cheese;
	delete clams;
}



void Pizza::bake() {
	std::cout << "Bake for 20 minutes at 200" << std::endl;
}

void Pizza::cut() {
	std::cout << "Cutting pizza into diagonal slices" << std::endl;
}

void Pizza::box() {
	std::cout << "Placing pizza in the official PizzaStore box" << std::endl;
}

std::string Pizza::getName() {
	return this->name;
}

void Pizza::setName(std::string _name) {
	this->name = _name;
}

