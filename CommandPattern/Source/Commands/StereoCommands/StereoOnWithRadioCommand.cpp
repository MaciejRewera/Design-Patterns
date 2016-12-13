/*
 * StereoOnWithRadioCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <StereoOnWithRadioCommand.h>

StereoOnWithRadioCommand::StereoOnWithRadioCommand(Stereo _stereo) :stereo(_stereo), previousState(_stereo.getState() ) {


}

StereoOnWithRadioCommand::~StereoOnWithRadioCommand() {

}


void StereoOnWithRadioCommand::execute() {
	this->previousState = this->stereo.getState();
	stereo.on();
	stereo.setRadio();
	stereo.setVolume(13);
}

void StereoOnWithRadioCommand::undo() {

}



