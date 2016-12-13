/*
 * CeilingFanOffCommand.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANOFFCOMMAND_H_
#define HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANOFFCOMMAND_H_

#include <Command.h>
#include <CeilingFan.h>

class CeilingFanOffCommand : public Command {
private:
	CeilingFan ceilingFan;
	int prevSpeed;

public:
	CeilingFanOffCommand(CeilingFan);
	~CeilingFanOffCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANOFFCOMMAND_H_ */
