/*
 * CheesePizza.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: maciek
 */

#include <CheesePizza.h>



CheesePizza::CheesePizza(AbstractIngredientFactory* _factory){
	this->ingredientFactory = _factory;
}

CheesePizza::~CheesePizza() {
	std::cout << "-----CHEESEPIZZA DESTRUCTOR-----" << std::endl;
}

void CheesePizza::prepare() {
	std::cout << "Preparing " << this->getName() << std::endl;
	this->dough = ingredientFactory->createDough();
	this->sauce = ingredientFactory->createSauce();
	this->cheese = ingredientFactory->createCheese();
}

