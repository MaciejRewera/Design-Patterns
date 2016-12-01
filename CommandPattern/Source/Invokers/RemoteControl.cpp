/*
 * RemoteControl.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#include <iostream>


#include <NoCommand.h>
#include <RemoteControl.h>


RemoteControl::RemoteControl() {
	static NoCommand noCommand;
	for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
		this->onCommands[i] = &noCommand;
		this->offCommands[i] = &noCommand;
	}
	this->undoCommand = &noCommand;
}

RemoteControl::~RemoteControl() {

}


void RemoteControl::setCommand(int _slot, Command& _onCommand, Command& _offCommand) {
	onCommands[_slot] = &_onCommand;
	offCommands[_slot] = &_offCommand;
}

void RemoteControl::onButtonPushed(int _slot) {
	onCommands[_slot]->execute();
	undoCommand = onCommands[_slot];
}

void RemoteControl::offButtonPushed(int _slot) {
	offCommands[_slot]->execute();
	undoCommand = offCommands[_slot];
}

void RemoteControl::undoButtonPushed() {
	undoCommand->undo();
}



std::ostream& operator<<(std::ostream& _stream, RemoteControl& _remote) {

	_stream << "\n------- REMOTE CONTROL -------\n";
	for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
		_stream << "[ " << i << " ]  ";
		_stream << _remote.onCommands[i]->getName() << "     " << _remote.offCommands[i]->getName() << std::endl;
	}
	return _stream;
}


