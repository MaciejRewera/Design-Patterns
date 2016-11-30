/*
 * CurrentWeatherDisplay.h
 *
 *  Created on: 02.11.2016
 *      Author: Maciek
 */

#ifndef SRC_CLASSES_CURRENTWEATHERDISPLAY_H_
#define SRC_CLASSES_CURRENTWEATHERDISPLAY_H_

#include <iostream>

#include "../interfaces/ObserverInterface.h"
#include "../interfaces/ObservableInterface.h"
#include "../interfaces/DisplayElementInterface.h"

#include "WeatherData.h"


class CurrentWeatherDisplay: public ObserverInterface,
		public virtual DisplayElementInterface {

private:
	float temperature;
	float humidity;

	ObservableInterface* subject;

public:
	CurrentWeatherDisplay();
	CurrentWeatherDisplay(ObservableInterface&);
	virtual ~CurrentWeatherDisplay();

	void update();
	void display();

};

#endif /* SRC_CLASSES_CURRENTWEATHERDISPLAY_H_ */
