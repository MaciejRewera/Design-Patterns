/*
 * WeatherData.h
 *
 *  Created on: 31.10.2016
 *      Author: Maciek
 */

#ifndef SRC_CLASSES_WEATHERDATA_H_
#define SRC_CLASSES_WEATHERDATA_H_


#include <iostream>

#include "../interfaces/ObserverInterface.h"
#include "../interfaces/ObservableInterface.h"

#define MAX_SIZE 10



class WeatherData: public ObservableInterface {
private:
	ObserverInterface *observers[MAX_SIZE];
	int size;

	float temperature;
	float humidity;
	float pressure;

	int findPos(ObserverInterface&);
	void organizeObservers(int);

public:
	WeatherData();
	virtual ~WeatherData();

	bool addObserver(ObserverInterface&);
	bool removeObserver(ObserverInterface&);
	void notifyObservers();

	void setParameters(float temp, float hum, float pres) {
		this->temperature = temp;
		this->humidity = hum;
		this->pressure = pres;
	}

	float getTemperature() {
		return this->temperature;
	}
	float getHumidity() {
		return this->humidity;
	}
	float getPressure() {
		return this->pressure;
	}


};


#endif /* SRC_CLASSES_WEATHERDATA_H_ */
