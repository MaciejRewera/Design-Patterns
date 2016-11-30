/*
 * ChicagoVeggiePizza.cpp
 *
 *  Created on: 17.11.2016
 *      Author: Maciek
 */

#include "ChicagoVeggiePizza.h"

ChicagoVeggiePizza::ChicagoVeggiePizza() {
	this->name = "Chicago Style Veggie Pizza";
	this->dough = "Thick dough";
	this->sauce = "Plum Tomato Sauce";

	this->addTopping(Cheese());
	this->addTopping(SweetPaprika());

}

ChicagoVeggiePizza::~ChicagoVeggiePizza() {
	// TODO Auto-generated destructor stub
}


void ChicagoVeggiePizza::cut() {
	std::cout << "Cutting pizza into rectangular slices." << std::endl;
}

