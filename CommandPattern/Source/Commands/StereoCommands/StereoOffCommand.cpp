/*
 * StereoOffCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <StereoOffCommand.h>

StereoOffCommand::StereoOffCommand(Stereo _stereo) : stereo(_stereo), previousState(_stereo.getState() ) {

}

StereoOffCommand::~StereoOffCommand() {

}

void StereoOffCommand::execute() {
	this->previousState = this->stereo.getState();
	this->stereo.setVolume(0);
	this->stereo.off();
}

void StereoOffCommand::undo() {

}



