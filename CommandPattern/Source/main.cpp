/*
 * main.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>

#include <RemoteControl.h>
#include <Light.h>
#include <LightOnCommand.h>
#include <LightOffCommand.h>


int main() {

	RemoteControl remoteControl;
	Light light;

	LightOnCommand lightOnCommand = LightOnCommand(light);
	LightOffCommand lightOffCommand = LightOffCommand(light);

	remoteControl.setCommand(0, lightOnCommand, lightOffCommand);
	std::cout << remoteControl << std::endl;

	remoteControl.onButtonPushed(0);
	remoteControl.undoButtonPushed();
	remoteControl.offButtonPushed(0);
	remoteControl.undoButtonPushed();

	remoteControl.onButtonPushed(1);
	remoteControl.offButtonPushed(1);

}


