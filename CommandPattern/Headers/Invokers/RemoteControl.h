/*
 * RemoteControl.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_INVOKERS_REMOTECONTROL_H_
#define HEADERS_INVOKERS_REMOTECONTROL_H_

#include <Command.h>


#define NUMBER_OF_SLOTS 7


class RemoteControl {
private:
	Command* onCommands[NUMBER_OF_SLOTS];
	Command* offCommands[NUMBER_OF_SLOTS];
	Command* undoCommand;

public:
	RemoteControl();
	~RemoteControl();

	void setCommand(int _slot, Command& _onCommand, Command& _offCommand);
	void onButtonPushed(int _slot);
	void offButtonPushed(int _slot);
	void undoButtonPushed();

	friend std::ostream& operator<<(std::ostream& _stream, RemoteControl& _remote);
};



#endif /* HEADERS_INVOKERS_REMOTECONTROL_H_ */
