/*
 * Duck.h
 *
 *  Created on: 30.10.2016
 *      Author: Maciek
 */

#ifndef CLASSES_DUCK_H_
#define CLASSES_DUCK_H_

#include <iostream>

#include "../FlyBehaviours/Flyable.h"
#include "../QuackBehaviours/Quackable.h"

class Duck {
private:
	Flyable* flyBehaviour;
	Quackable* quackBehaviour;

public:
	Duck(Flyable* aFly = NULL, Quackable* aQuack = NULL) : flyBehaviour(aFly), quackBehaviour(aQuack) {}
	Duck(Flyable& aFly, Quackable& aQuack) : flyBehaviour(&aFly), quackBehaviour(&aQuack) {}

	virtual ~Duck(){
		std::cout << "--LAUNCHING DUCK DESTRUCTOR--" <<std::endl;

		delete this->flyBehaviour;
		std::cout << "---flyBehaviour memory released---" << std::endl;

		delete this->quackBehaviour;
		std::cout << "---quackBehaviour memory released---" << std::endl;
	}

	void swim() {
		std::cout << "I'm swimming!" << std::endl;
	}

	virtual void display() {
		std::cout << "Looks like a duck." << std::endl;
	}

	void setFlyBehaviour(Flyable& aFlyBehaviour) {
		//Release the memory
		delete this->flyBehaviour;
		//Assign new object's address
		this->flyBehaviour = &aFlyBehaviour;
	}
	void setFlyBehaviour(Flyable* aFlyBehaviour) {
			delete this->flyBehaviour;

			this->flyBehaviour = aFlyBehaviour;
		}

	void setQuackBehaviour(Quackable& aQuackBehaviour) {
		//Release the memory
		delete this->quackBehaviour;
		//Assign new object's address
		this->quackBehaviour = &aQuackBehaviour;
	}
	void setQuackBehaviour(Quackable* aQuackBehaviour) {
			delete this->quackBehaviour;

			this->quackBehaviour = aQuackBehaviour;
		}


	bool performFly();

	bool performQuack();

};



#endif /* CLASSES_DUCK_H_ */
