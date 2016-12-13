/*
 * StereoOff.h
 *
 *  Created on: Dec 13, 2016
 *      Author: maciek
 */

#ifndef HEADERS_COMMANDS_STEREOCOMMANDS_STEREOOFFCOMMAND_H_
#define HEADERS_COMMANDS_STEREOCOMMANDS_STEREOOFFCOMMAND_H_

#include <Stereo.h>
#include <Command.h>

class StereoOffCommand : public Command {
private:
	Stereo* stereo;
	int previousState;
public:
	StereoOffCommand(Stereo& _stereo);
	~StereoOffCommand();

	void execute();
	void undo();

};



#endif /* HEADERS_COMMANDS_STEREOCOMMANDS_STEREOOFFCOMMAND_H_ */
