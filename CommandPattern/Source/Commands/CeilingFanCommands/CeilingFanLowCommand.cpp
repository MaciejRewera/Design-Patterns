/*
 * CeilingFanLowCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <CeilingFanLowCommand.h>

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan _ceilingFan) : ceilingFan(_ceilingFan) {
	this->prevSpeed = _ceilingFan.getSpeed();
}

CeilingFanLowCommand::~CeilingFanLowCommand() {

}


void CeilingFanLowCommand::execute() {
	this->prevSpeed = ceilingFan.getSpeed();
	ceilingFan.low();
}

void CeilingFanLowCommand::undo() {
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


