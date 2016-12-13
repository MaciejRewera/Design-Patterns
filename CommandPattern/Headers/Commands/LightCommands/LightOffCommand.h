/*
 * LightOffCommand.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_LIGHTCOMMANDS_LIGHTOFFCOMMAND_H_
#define HEADERS_COMMANDS_LIGHTCOMMANDS_LIGHTOFFCOMMAND_H_


#include <Command.h>
#include <Light.h>

class LightOffCommand : public Command {
private:
	Light* light;

public:
	LightOffCommand(Light&);
	~LightOffCommand();

	void execute();
	void undo();
};




#endif /* HEADERS_COMMANDS_LIGHTCOMMANDS_LIGHTOFFCOMMAND_H_ */
