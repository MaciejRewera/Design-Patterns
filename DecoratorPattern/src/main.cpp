/*
 * main.cpp
 *
 *  Created on: 03.11.2016
 *      Author: Maciek
 */

#include <iostream>

#include "includes.h"


//enum sizes {SMALL = 0, MEDIUM = 1, LARGE = 2};


int main() {

	Beverage& beverage = *(new Espresso());
//	beverage = *(new Mocha(beverage));
	std::cout << beverage.getDescription() << " $" << beverage.cost() << std::endl;


	Beverage* beverage2 = new CafeCreme();
	beverage2->setSize(LARGE);
	beverage2 = new Mocha(*beverage2);
	beverage2 = new Mocha(*beverage2);
	beverage2 = new Soy(*beverage2);
	std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;


	delete &beverage;
	delete beverage2;

}
