/*
 * LightOnCommand.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <LightOnCommand.h>


LightOnCommand::LightOnCommand(Light _light) : light(_light) {

}

LightOnCommand::~LightOnCommand() {

}


void LightOnCommand::execute() {
	this->light.on();
}

void LightOnCommand::undo() {
	this->light.off();
}

