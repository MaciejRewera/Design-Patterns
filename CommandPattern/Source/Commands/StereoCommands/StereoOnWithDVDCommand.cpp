/*
 * StereoOnWithDVDCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <StereoOnWithDVDCommand.h>

StereoOnWithDVDCommand::StereoOnWithDVDCommand(Stereo _stereo) :stereo(_stereo), previousState(_stereo.getState() ) {


}

StereoOnWithDVDCommand::~StereoOnWithDVDCommand() {

}


void StereoOnWithDVDCommand::execute() {
	this->previousState = this->stereo.getState();
	stereo.on();
	stereo.setDvd();
	stereo.setVolume(21);
}

void StereoOnWithDVDCommand::undo() {

}


