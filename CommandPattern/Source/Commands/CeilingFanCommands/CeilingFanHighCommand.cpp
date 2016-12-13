/*
 * CeilingFanHighCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <CeilingFanHighCommand.h>

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan& _ceilingFan) : ceilingFan(&_ceilingFan) {
	this->prevSpeed = _ceilingFan.getSpeed();
}

CeilingFanHighCommand::~CeilingFanHighCommand() {

}


void CeilingFanHighCommand::execute() {
	this->prevSpeed = ceilingFan->getSpeed();
	ceilingFan->high();
}

void CeilingFanHighCommand::undo() {
	if (this->prevSpeed == CeilingFan::OFF) {
		ceilingFan->off();
	} else if (this->prevSpeed == CeilingFan::LOW) {
		ceilingFan->low();
	} else if (this->prevSpeed == CeilingFan::MEDIUM) {
		ceilingFan->medium();
	} else if (this->prevSpeed == CeilingFan::HIGH) {
		ceilingFan->high();
	}
}


