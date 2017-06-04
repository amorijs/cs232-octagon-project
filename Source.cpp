#include"Octagon.h"
#include<iostream>
using namespace std;

int main() {
	int side; 

	cout << "Enter length of Octagon side (3-8): ";
	cin >> side;

	while (cin.fail() || side < 3 || side > 8) {
		cout << "Input not valid. Please enter an integer from 3 to 8: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> side;
	}

	Octagon *octagon = new Octagon(side);
	octagon->printOctagon();

	system("pause");
	return 0;
}