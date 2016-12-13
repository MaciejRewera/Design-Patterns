/*
 * LightOffCommand.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <LightOffCommand.h>


LightOffCommand::LightOffCommand(Light& _light) : light(&_light) {
	this->name = "LightOffCommand";
}

LightOffCommand::~LightOffCommand() {

}


void LightOffCommand::execute() {
	this->light->off();
}

void LightOffCommand::undo() {
	this->light->on();
}

