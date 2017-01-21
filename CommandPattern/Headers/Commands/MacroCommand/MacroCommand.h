/*
 * MacroCommand.h
 *
 *  Created on: Dec 14, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_MACROCOMMAND_MACROCOMMAND_H_
#define HEADERS_COMMANDS_MACROCOMMAND_MACROCOMMAND_H_

#include <Command.h>
#include <vector>

class MacroCommand : public Command {
private:
	 std::vector<Command&> commands;

public:
	MacroCommand(std::vector<Command&> _commands);
	~MacroCommand();

	void execute();
	void undo();
};




#endif /* HEADERS_COMMANDS_MACROCOMMAND_MACROCOMMAND_H_ */
