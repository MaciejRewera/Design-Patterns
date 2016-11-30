/*
 * main.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: maciek
 */

#include <iostream>

#include <ChocolateBoiler.h>


int main() {
	ChocolateBoiler& boiler = ChocolateBoiler::getInstance();
	ChocolateBoiler& boiler2 = ChocolateBoiler::getInstance();

	std::cout << "[" << boiler.getNum() << "]" << std::endl;
	std::cout << "[" << boiler2.getNum() << "]" << std::endl;


	boiler.setNum(13);
//	boiler2.setNum(13);

	std::cout << "[" << boiler.getNum() << "]" << std::endl;
	std::cout << "[" << boiler2.getNum() << "]" << std::endl;


}
