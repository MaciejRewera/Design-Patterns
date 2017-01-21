/*
 * MacroCommand.cpp
 *
 *  Created on: Dec 14, 2016
 *      Author: maciek
 */

#include <MacroCommand.h>

MacroCommand::MacroCommand(std::vector<Command&> _commands) {
	for (int c = 0; c < _commands.size(); c++) {
		this->commands.push_back(_commands[c]);
	}

}

MacroCommand::~MacroCommand() {

}


void MacroCommand::execute() {
	for (int i = 0; i < commands.size(); i++)
		commands.at(i).execute();
}

void MacroCommand::undo() {
	for (int i = 0; i < commands.size(); i++)
		commands.at(i).undo();
}



