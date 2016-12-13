/*
 * StereoOnWithCDCommand.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHCDCOMMAND_H_
#define HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHCDCOMMAND_H_

#include <Stereo.h>
#include <Command.h>

class StereoOnWithCDCommand : public Command {
private:
	Stereo* stereo;
	int previousState;
public:
	StereoOnWithCDCommand(Stereo& _stereo);
	~StereoOnWithCDCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHCDCOMMAND_H_ */
