/*
 * CeilingFanMediumCommand.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANMEDIUMCOMMAND_H_
#define HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANMEDIUMCOMMAND_H_

#include <Command.h>
#include <CeilingFan.h>

class CeilingFanMediumCommand : public Command {
private:
	CeilingFan ceilingFan;
	int prevSpeed;

public:
	CeilingFanMediumCommand(CeilingFan);
	~CeilingFanMediumCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_CEILINGFANCOMMANDS_CEILINGFANMEDIUMCOMMAND_H_ */
