/*
 * CeilingFanMediumCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <CeilingFanMediumCommand.h>

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan _ceilingFan) : ceilingFan(_ceilingFan) {
	this->prevSpeed = _ceilingFan.getSpeed();
}

CeilingFanMediumCommand::~CeilingFanMediumCommand() {

}


void CeilingFanMediumCommand::execute() {
	this->prevSpeed = ceilingFan.getSpeed();
	ceilingFan.medium();
}

void CeilingFanMediumCommand::undo() {
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


