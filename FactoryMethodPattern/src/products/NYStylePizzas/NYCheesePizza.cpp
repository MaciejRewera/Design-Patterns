/*
 * NYCheesePizza.cpp
 *
 *  Created on: 16.11.2016
 *      Author: Maciek
 */

#include "NYCheesePizza.h"

NYCheesePizza::NYCheesePizza() {
	this->name = "NY Style Cheese Pizza";
	this->dough = "Thin Crispy Dough";
	this->sauce = "Marinara Sauce";

	this->addTopping(Cheese());
}

NYCheesePizza::~NYCheesePizza() {

}

