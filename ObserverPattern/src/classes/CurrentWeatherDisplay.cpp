/*
 * CurrentWeatherDisplay.cpp
 *
 *  Created on: 02.11.2016
 *      Author: Maciek
 */

#include "CurrentWeatherDisplay.h"

CurrentWeatherDisplay::CurrentWeatherDisplay() : temperature(0), humidity(0), subject(NULL) {

}

CurrentWeatherDisplay::CurrentWeatherDisplay(ObservableInterface& sub) : temperature(0), humidity(0) {
	this->subject = &sub;
}

CurrentWeatherDisplay::~CurrentWeatherDisplay() {
	// TODO Auto-generated destructor stub
}


void CurrentWeatherDisplay::update() {
	if (WeatherData* weatherData = dynamic_cast<WeatherData*>(this->subject)) {
		this->temperature = weatherData->getTemperature();
		this->humidity = weatherData->getHumidity();
	}
	this->display();
}


void CurrentWeatherDisplay::display() {
	std::cout << "\n    CURRENT WEATHER    " <<
			"\nTemperature: " << this->temperature <<
			"\n   Humidity: " << this->humidity << std::endl;
}
