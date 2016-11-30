/*
 * NYVeggiePizza.cpp
 *
 *  Created on: 16.11.2016
 *      Author: Maciek
 */

#include "NYVeggiePizza.h"

NYVeggiePizza::NYVeggiePizza() {
	this->name = "NY Style Veggie Pizza";
	this->dough = "Thin Crispy Dough";
	this->sauce = "Marinara Sauce";

	this->addTopping(SweetPaprika());
}

NYVeggiePizza::~NYVeggiePizza() {

}

