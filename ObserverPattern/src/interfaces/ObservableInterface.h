/*
 * ObservableInterface.h
 *
 *  Created on: 31.10.2016
 *      Author: Maciek
 */

#ifndef SRC_INTERFACES_OBSERVABLEINTERFACE_H_
#define SRC_INTERFACES_OBSERVABLEINTERFACE_H_

#include "ObserverInterface.h"


class ObservableInterface {
public:
	virtual bool addObserver(ObserverInterface&) = 0;
	virtual bool removeObserver(ObserverInterface&) = 0;
	virtual void notifyObservers() = 0;

	virtual ~ObservableInterface() {}
};



#endif /* SRC_INTERFACES_OBSERVABLEINTERFACE_H_ */
