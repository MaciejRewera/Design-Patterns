/*
 * main.cpp
 *
 *  Created on: 31.10.2016
 *      Author: Maciek
 */

#include <iostream>
#include <ctime>
#include <random>
#include <unistd.h>


#include "includes.h"




int main() {

	srand(time(NULL));

	std::cout << "Weather Station Software" << std::endl;

	WeatherData weatherData;
	CurrentWeatherDisplay currDisplay(weatherData);


	weatherData.addObserver(currDisplay);


	for (int i = 0; i < 5; i++) {
		weatherData.setParameters(15 + (rand() % 15), 50 + (rand() % 40), 990 + (rand() % 30));
		weatherData.notifyObservers();
		std::cout.flush();
		sleep(1);
	}

}


