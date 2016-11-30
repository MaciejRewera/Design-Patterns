/*
 * WeatherData.cpp
 *
 *  Created on: 31.10.2016
 *      Author: Maciek
 */

#include <iostream>

#include "WeatherData.h"


/*
 * WeatherData constructor.
 * Initializes all numeric fields with zeros and observers array with NULL values.
 */

WeatherData::WeatherData() : size(0), temperature(0), humidity(0), pressure(0) {
	for ( int i = 0; i < MAX_SIZE; i++)
		this->observers[i] = NULL;
}

WeatherData::~WeatherData() {
	std::cout << "--WeatherData Destructor--" << std::endl;
}


/*
 * Function that finds the position of certain observer in the observers list.
 *
 * @param &o: reference to the observer the function is about to look for.
 * @return: if observer is on the list and was found, function returns its index (position).
 * 			Otherwise it returns -1.
 */

int WeatherData::findPos(ObserverInterface& o) {
	for (int i = 0; i < this->size; i++) {
		if (observers[i] == &o)
			return i;
	}

	return -1;
}


/*
 *	Function that shifts all values in the observers array from the given index, so that there were no
 *	"NULL" values between valid ones.
 *
 *	@param pos:	position, where NULL value is expected to be.
 *
 */

void WeatherData::organizeObservers(int pos) {
	if (observers[pos] != NULL)
		return;

	int i = pos + 1;
	while (observers[i] != NULL) {
		observers[i - 1] = observers[i];
		i++;
	}
	observers[i-1] = NULL;
}


/*
 * Function that adds new observer to the observers list.
 * !!!Important!!! --> observers array stores addresses!
 *
 * @param &o: reference to the being added observer object.
 * @return: returns true if observer was successfully added to the list. Otherwise returns false.
 */

bool WeatherData::addObserver(ObserverInterface& o) {
	// If there is no more space, do not add another observer.
	if (this->size >= MAX_SIZE) {
		return false;
	}

	// Else, add observer "o" to the end of list.
	this->observers[size] = &o;
	this->size++;
	return true;
}


/*
 * Function that removes observer from the list.
 *
 * @param &o: reference to the observer that is going to be removed.
 * @return: returns true if observer was found and removed, otherwise returns false.
 */

bool WeatherData::removeObserver(ObserverInterface& o) {
	int pos = findPos(o);
	if (pos > -1) {
		this->observers[pos] = NULL;
		this->size--;
		organizeObservers(pos);
		return true;
	}
	else
		return false;
}


/*
 *	Function that notifies observers to update themselves.
 *
 */

void WeatherData::notifyObservers() {
	for (int i = 0; i < this->size; i++) {
		this->observers[i]->update();
	}
}
