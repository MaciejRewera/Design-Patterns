/*
 * ChocolateBoiler.h
 *
 *  Created on: Nov 23, 2016
 *      Author: maciek
 */

#ifndef HEADERS_CHOCOLATEBOILER_H_
#define HEADERS_CHOCOLATEBOILER_H_


class ChocolateBoiler {
private:
	bool boiled;
	bool emptied;
	int num;

//	static ChocolateBoiler& uniqueInstance;

	ChocolateBoiler();

public:
	ChocolateBoiler(const ChocolateBoiler&);
	ChocolateBoiler& operator=(const ChocolateBoiler&);

	static ChocolateBoiler& getInstance();

	void boil();
	void empty();
	void fill();

	bool isBoiled();
	bool isEmpty();

	void setNum(int n);
	int getNum();

};





#endif /* HEADERS_CHOCOLATEBOILER_H_ */
