/*
 * LightOnCommand.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_LIGHTCOMMANDS_LIGHTONCOMMAND_H_
#define HEADERS_COMMANDS_LIGHTCOMMANDS_LIGHTONCOMMAND_H_


#include <Command.h>
#include <Light.h>

class LightOnCommand : public Command {
private:
	Light light;

public:
	LightOnCommand(Light);
	~LightOnCommand();

	void execute();
	void undo();
};




#endif /* HEADERS_COMMANDS_LIGHTCOMMANDS_LIGHTONCOMMAND_H_ */
