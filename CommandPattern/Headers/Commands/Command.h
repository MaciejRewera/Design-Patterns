/*
 * AbstractCommand.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_COMMAND_H_
#define HEADERS_COMMANDS_COMMAND_H_


class Command {
public:
	virtual ~Command() {};

	virtual void execute() = 0;
	virtual void undo() = 0;
};



#endif /* HEADERS_COMMANDS_COMMAND_H_ */
