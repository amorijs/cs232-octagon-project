#include"Octagon.h"
using namespace std;

Octagon::Octagon(int side) {
	this->side = side;
	numOfRows = (side * 3) - 2;
}

void Octagon::printOctagon() {	
	printHorizontal();
	printTopDiagonals();
	printVerticals();
	printBottomDiagonals();
	printHorizontal();
}

void Octagon::printHorizontal() {
	printSpaces(side - 1);
	printStars(side);
	cout << endl;
}

void Octagon::printVerticals() {
	for (int i = 0; i < side; i += 1) {
		printStars(1);
		printSpaces(numOfRows - 2);
		printStars(1);
		cout << endl;
	}
}

void Octagon::printTopDiagonals() {
	int numOfSpacesAfterStar = side;
	for (int i = side - 2; i > 0; i -= 1) {
		printSpaces(i);
		printStars(1);
		printSpaces(numOfSpacesAfterStar);
		printStars(1);
		cout << endl;

		numOfSpacesAfterStar += 2;
	}
}

void Octagon::printBottomDiagonals() {
	int numOfSpacesAfterStar = numOfRows - 4;
	for (int i = 1; i <= side - 2; i += 1) {
		printSpaces(i);
		printStars(1);
		printSpaces(numOfSpacesAfterStar);
		printStars(1);
		cout << endl;

		numOfSpacesAfterStar -= 2;
	}
}

void Octagon::printSpaces(int numOfSpaces) {
	for (int i = 0; i < numOfSpaces; i += 1) {
		cout << " ";
	}
}
void Octagon::printStars(int numOfStars) {
	for (int i = 0; i < numOfStars; i += 1) {
		cout << "*";
	}
}