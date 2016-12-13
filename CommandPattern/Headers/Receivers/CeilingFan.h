/*
 * CeilingFan.h
 *
 *  Created on: Dec 1, 2016
 *      Author: maciek
 */

#ifndef HEADERS_RECEIVERS_CEILINGFAN_H_
#define HEADERS_RECEIVERS_CEILINGFAN_H_


class CeilingFan {
private:
	int speed;

public:
	static const int OFF = 0;
	static const int LOW = 1;
	static const int MEDIUM = 2;
	static const int HIGH = 3;

	CeilingFan();
	~CeilingFan();

	void low();
	void medium();
	void high();
	void off();

	int getSpeed();
};


#endif /* HEADERS_RECEIVERS_CEILINGFAN_H_ */
