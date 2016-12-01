/*
 * NoCommand.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_NOCOMMAND_H_
#define HEADERS_COMMANDS_NOCOMMAND_H_

#include <Command.h>


class NoCommand : public Command {

public:
	NoCommand();
	~NoCommand();

	void execute();
	void undo();
};



#endif /* HEADERS_COMMANDS_NOCOMMAND_H_ */
