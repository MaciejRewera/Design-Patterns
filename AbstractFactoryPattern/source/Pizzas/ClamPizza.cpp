/*
 * ClamPizza.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: maciek
 */

#include <ClamPizza.h>


ClamPizza::ClamPizza(AbstractIngredientFactory* _factory) {
	this->ingredientFactory = _factory;
}

ClamPizza::~ClamPizza() {
	std::cout << "-----CLAMPIZZA DESTRUCTOR-----" << std::endl;
}

void ClamPizza::prepare() {
	std::cout << "Preparing " << this->getName() << std::endl;
	this->dough = ingredientFactory->createDough();
	this->sauce = ingredientFactory->createSauce();
	this->cheese = ingredientFactory->createCheese();
	this->clams = ingredientFactory->createClams();
}


