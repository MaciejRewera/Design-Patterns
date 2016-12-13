/*
 * StereoOnWithDVDCommand.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHDVDCOMMAND_H_
#define HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHDVDCOMMAND_H_

#include <Stereo.h>
#include <Command.h>

class StereoOnWithDVDCommand : public Command {
private:
	Stereo* stereo;
	int previousState;
public:
	StereoOnWithDVDCommand(Stereo& _stereo);
	~StereoOnWithDVDCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHDVDCOMMAND_H_ */
