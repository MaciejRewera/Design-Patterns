/*
 * ChocolateBoiler.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: maciek
 */

#include <ChocolateBoiler.h>

ChocolateBoiler::ChocolateBoiler() : emptied(true), boiled(false), num(0) {

}

ChocolateBoiler::ChocolateBoiler(const ChocolateBoiler& pattern) {

}

ChocolateBoiler& ChocolateBoiler::operator=(const ChocolateBoiler& pattern) {

}


ChocolateBoiler& ChocolateBoiler::getInstance() {
	static ChocolateBoiler uniqueInstance;
	return uniqueInstance;
}



void ChocolateBoiler::boil() {
	if ( !isBoiled() && !isEmpty() )
		this->boiled = true;
}

void ChocolateBoiler::empty() {
	if ( !isEmpty() )
		this->emptied = true;
}

void ChocolateBoiler::fill() {
	if ( isEmpty() ) {
		this->emptied = false;
	}
	this->boiled = false;
}


bool ChocolateBoiler::isBoiled() {
	return this->boiled;
}

bool ChocolateBoiler::isEmpty() {
	return this->emptied;
}


void ChocolateBoiler::setNum(int n) {
	this->num = n;
}

int ChocolateBoiler::getNum() {
	return this->num;
}

