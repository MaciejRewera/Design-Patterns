/*
 * main.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>
#include <vector>

#include <Command.h>
#include <RemoteControl.h>
#include <Light.h>
#include <LightOnCommand.h>
#include <LightOffCommand.h>
#include <Stereo.h>
#include <StereoOffCommand.h>
#include <StereoOnWithCDCommand.h>
#include <StereoOnWithDVDCommand.h>
#include <StereoOnWithRadioCommand.h>
#include <MacroCommand.h>


int main() {

	RemoteControl remoteControl;
	Light light;
	Stereo stereo;


	LightOnCommand lightOnCommand = LightOnCommand(light);
	LightOffCommand lightOffCommand = LightOffCommand(light);

	StereoOnWithCDCommand stereoOnWithCDCommand(stereo);
	StereoOnWithDVDCommand stereoOnWithDVDCommand(stereo);
	StereoOnWithRadioCommand stereoOnWithRadioCommand(stereo);
	StereoOffCommand stereoOffCommand(stereo);

	std::vector<Command&> partyOn[] = {lightOnCommand, stereoOnWithCDCommand, stereoOnWithRadioCommand };
	std::vector<Command&> partyOff[] = {lightOffCommand, stereoOffCommand };

	MacroCommand partyOnMacro(partyOn);
	MacroCommand partyOffMacro(partyOff);


	remoteControl.setCommand(0, lightOnCommand, lightOffCommand);
	remoteControl.setCommand(1, stereoOnWithCDCommand, stereoOffCommand);
	remoteControl.setCommand(2, stereoOnWithDVDCommand, stereoOffCommand);
	remoteControl.setCommand(3, stereoOnWithRadioCommand, stereoOffCommand);
	remoteControl.setCommand(4, partyOnMacro, partyOffMacro);


	std::cout << remoteControl << std::endl;



}


