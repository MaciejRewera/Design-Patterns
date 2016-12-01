/*
 * CeilingFan.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>

#include <CeilingFan.h>


CeilingFan::CeilingFan() : speed(0) {

}

CeilingFan::~CeilingFan() {

}



void CeilingFan::low() {
	this->speed = LOW;
}

void CeilingFan::medium() {
	this->speed = MEDIUM;
}

void CeilingFan::high() {
	this->speed = HIGH;
}

void CeilingFan::off() {
	this->speed = OFF;
}

int CeilingFan::getSpeed() {
	return this->speed;
}


