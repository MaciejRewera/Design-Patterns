/*
 * CeilingFanOffCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <CeilingFanOffCommand.h>

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan _ceilingFan) : ceilingFan(_ceilingFan) {
	this->prevSpeed = _ceilingFan.getSpeed();
}

CeilingFanOffCommand::~CeilingFanOffCommand() {

}


void CeilingFanOffCommand::execute() {
	this->prevSpeed = ceilingFan.getSpeed();
	ceilingFan.off();
}

void CeilingFanOffCommand::undo() {
	if (this->prevSpeed == CeilingFan::OFF) {
		ceilingFan.off();
	} else if (this->prevSpeed == CeilingFan::LOW) {
		ceilingFan.low();
	} else if (this->prevSpeed == CeilingFan::MEDIUM) {
		ceilingFan.medium();
	} else if (this->prevSpeed == CeilingFan::HIGH) {
		ceilingFan.high();
	}
}

