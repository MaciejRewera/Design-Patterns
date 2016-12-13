/*
 * StereoOnWithRadioCommand.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHRADIOCOMMAND_H_
#define HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHRADIOCOMMAND_H_

#include <Stereo.h>
#include <Command.h>

class StereoOnWithRadioCommand : public Command {
private:
	Stereo* stereo;
	int previousState;
public:
	StereoOnWithRadioCommand(Stereo& _stereo);
	~StereoOnWithRadioCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_STEREOCOMMANDS_STEREOONWITHRADIOCOMMAND_H_ */
