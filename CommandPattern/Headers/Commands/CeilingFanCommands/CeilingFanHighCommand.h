/*
 * CeilingFanHighCommand.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANHIGHCOMMAND_H_
#define HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANHIGHCOMMAND_H_

#include <Command.h>
#include <CeilingFan.h>

class CeilingFanHighCommand : public Command {
private:
	CeilingFan* ceilingFan;
	int prevSpeed;

public:
	CeilingFanHighCommand(CeilingFan&);
	~CeilingFanHighCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANHIGHCOMMAND_H_ */
