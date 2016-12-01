/*
 * Command.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>

#include <Command.h>


Command::Command() {
	this->name = "Command";
}

Command::~Command() {

}


std::string Command::getName() {
	return this->name;
}

