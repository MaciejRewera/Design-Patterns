/*
 * CeilingFanLowCommand.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANLOWCOMMAND_H_
#define HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANLOWCOMMAND_H_

#include <Command.h>
#include <CeilingFan.h>

class CeilingFanLowCommand : public Command {
private:
	CeilingFan ceilingFan;
	int prevSpeed;

public:
	CeilingFanLowCommand(CeilingFan);
	~CeilingFanLowCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANLOWCOMMAND_H_ */
