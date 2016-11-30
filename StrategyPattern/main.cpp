/*
 * main.cpp
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#include <iostream>

#include "includes.h"


using namespace std;


int main() {

	Duck& mallard = *(new MallardDuck());
	mallard.display();
	mallard.swim();
	mallard.performFly();
	mallard.performQuack();

//	Flyable* fly = new FlyWithWings();
	mallard.setFlyBehaviour(new FlyWithWings());
	mallard.performFly();


	mallard.setQuackBehaviour(new Quack());
	mallard.performQuack();

	delete &mallard;
}
