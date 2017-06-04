#ifndef _Octagon_h
#define _Octagon_h
#include<iostream>

class Octagon {
private:
	int side;
	int numOfRows;
public:
	Octagon(int side);
	void printOctagon();
	void printHorizontal();
	void printVerticals();
	void printTopDiagonals();
	void printBottomDiagonals();
	void printSpaces(int numOfSpaces);
	void printStars(int numOfStars);
};

#endif
