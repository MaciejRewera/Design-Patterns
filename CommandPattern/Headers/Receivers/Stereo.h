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
	int state;
public:
	static const int OFF = 0;
	static const int CD = 1;
	static const int DVD = 2;
	static const int RADIO = 3;

	Stereo();
	~Stereo();

	void on();
	void off();
	void setCd();
	void setDvd();
	void setRadio();
	void setVolume(int);

	int getVolume();
	int getState();

};



#endif /* HEADERS_RECEIVERS_STEREO_H_ */
