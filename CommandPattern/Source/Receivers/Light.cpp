/*
 * Light.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>

#include <Light.h>


Light::Light() {

}

Light::~Light() {

}


void Light::on() {
	std::cout << "Light is ON" << std::endl;
}

void Light::off() {
	std::cout << "Light is OFF" << std::endl;
}

