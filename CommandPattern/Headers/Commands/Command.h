/*
 * AbstractCommand.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_COMMAND_H_
#define HEADERS_COMMANDS_COMMAND_H_

#include <iostream>

class Command {
protected:
	std::string name;
public:
	Command();
	virtual ~Command();

	virtual void execute() = 0;
	virtual void undo() = 0;

	virtual std::string getName();
};



#endif /* HEADERS_COMMANDS_COMMAND_H_ */
