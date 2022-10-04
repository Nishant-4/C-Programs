#include <iostream>
using namespace std;

int main() {
	float base = 0, height = 0, area = 0;

	cout << "Enter base of triangle: ";
	cin >> base;

	cout << "Enter height of triangle: ";
	cin >> height;

	area = 0.5 * (base * height);

	cout << "Area of Traingle is: " << area;

	return 0;
}
