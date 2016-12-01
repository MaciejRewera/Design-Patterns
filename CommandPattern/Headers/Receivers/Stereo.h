/*
 * Stereo.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_RECEIVERS_STEREO_H_
#define HEADERS_RECEIVERS_STEREO_H_


class Stereo {
private:
	int volume;
public:
	Stereo();
	~Stereo();

	void on();
	void off();
	void setCd();
	void setDvd();
	void setRadio();
	void setVolume(int);

	int getVolume();

};



#endif /* HEADERS_RECEIVERS_STEREO_H_ */
