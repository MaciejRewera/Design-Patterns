/*
 * main.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>

#include <Light.h>
#include <LightOnCommand.h>
#include <LightOffCommand.h>


int main() {

	Light light = Light();
	LightOnCommand lightOn = LightOnCommand(light);
	LightOffCommand lightOff = LightOffCommand(light);

	lightOn.execute();
	lightOff.execute();
	lightOff.undo();
	lightOn.undo();

}


