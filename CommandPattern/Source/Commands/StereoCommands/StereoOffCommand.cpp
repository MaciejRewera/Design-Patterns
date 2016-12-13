/*
 * StereoOffCommand.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#include <StereoOffCommand.h>

StereoOffCommand::StereoOffCommand(Stereo& _stereo) : stereo(&_stereo), previousState(_stereo.getState() ) {
	this->name = "StereoOffCommand";
}

StereoOffCommand::~StereoOffCommand() {

}

void StereoOffCommand::execute() {
	this->previousState = this->stereo->getState();
	this->stereo->setVolume(0);
	this->stereo->off();
}

void StereoOffCommand::undo() {
	if (this->previousState == Stereo::OFF) {
		stereo->setVolume(0);
		stereo->off();
	} else if (this->previousState == Stereo::CD) {
		stereo->on();
		stereo->setCd();
		stereo->setVolume(19);
	} else if (this->previousState == Stereo::DVD) {
		stereo->on();
		stereo->setDvd();
		stereo->setVolume(21);
	} else if (this->previousState == Stereo::RADIO) {
		stereo->on();
		stereo->setRadio();
		stereo->setVolume(13);
	}
}



