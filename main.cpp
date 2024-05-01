#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int fuel_max = 300;
	cout << "enter distance from A to B";
	int A_B;
	cin >> A_B;
	cout << "enter distance from B to C";
	int B_C;
	cin >> B_C;
	cout << "enter weight of cargo";
	int weight;
	cin >> weight;

	int fuel;
	if (weight <= 500) {
		fuel = 1;
	}
	else if (weight >= 500 || weight <= 1000) {
		fuel = 4;
	}
	else if (weight >= 1000 || weight <= 1500) {
		fuel = 7;
	}
	else if (weight >= 1500 || weight <= 2000) {
		fuel = 9;
	}
	else {
		cout << "the aircraft is very heavy" << endl;
		return 0;
	}
	int fuel_needed = A_B * fuel + B_C * fuel;

	if (fuel_needed <= fuel_max) {
		cout << "fuel required for refuelling " << fuel_needed  << endl;
	}
	else {
		cout << " the aircraft will not have enough fuel " << endl;
	}
	return 0;
	system("pause");
}