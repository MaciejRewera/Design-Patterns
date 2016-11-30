/*
 * ObserverInterface.h
 *
 *  Created on: 31.10.2016
 *      Author: Maciek
 */

#ifndef SRC_INTERFACES_OBSERVERINTERFACE_H_
#define SRC_INTERFACES_OBSERVERINTERFACE_H_

class ObserverInterface {
public:
	virtual void update() = 0;

	virtual ~ObserverInterface() {}
};


#endif /* SRC_INTERFACES_OBSERVERINTERFACE_H_ */
