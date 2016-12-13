/*
 * Stereo.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>

#include <Stereo.h>


Stereo::Stereo() : volume(0), state(OFF) {

}

Stereo::~Stereo() {

}


void Stereo::on() {
	std::cout << "Stereo is ON" << std::endl;
}

void Stereo::off() {
	this->state = OFF;
	std::cout << "Stereo is OFF" << std::endl;
}

void Stereo::setCd() {
	this->state = CD;
	std::cout << "Stereo : CD" << std::endl;
}

void Stereo::setDvd() {
	this->state = DVD;
	std::cout << "Stereo : DVD" << std::endl;
}

void Stereo::setRadio() {
	this->state = RADIO;
	std::cout << "Stereo : Radio" << std::endl;
}

void Stereo::setVolume(int _vol) {
	this->volume = _vol;
	std::cout << "Volume: " << _vol << std::endl;
}

void Stereo::setState(int _state) {
	this->state = _state;
}


int Stereo::getVolume() {
	return this->volume;
}

int Stereo::getState() {
	return this->state;
}

