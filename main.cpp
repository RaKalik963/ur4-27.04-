#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter num1 ";
	int n1;
	cin >> n1;
	cout << "enter num2 ";
	int n2;
	cin >> n2;
	cout << "enter num3 ";
	int n3;
	cin >> n3;
	cout << "enter num4 ";
	int n4;
	cin >> n4;
	cout << "enter num5 ";
	int n5;
	cin >> n5;
	cout << "enter num6 ";
	int n6;
	cin >> n6;
	cout << "enter num7 ";
	int n7;
	cin >> n7;

	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5 && n1 > n6 && n1 > n7)
	{
		cout << "n1 maximum number" << endl;
	}
	else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5 && n2 > n6 && n2 > n7)
	{
		cout << "n2 maximum number" << endl;
	}
	else if (n3 > n2 && n3 > n1 && n3 > n4 && n3 > n5 && n3 > n6 && n3 > n7)
	{
		cout << "n3 maximum number" << endl;
	}
	else if (n4 > n2 && n4 > n3 && n4 > n1 && n4 > n5 && n4 > n6 && n4 > n7)
	{
		cout << "n4 maximum number" << endl;
	}
	else if (n5 > n2 && n5 > n3 && n5 > n4 && n5 > n1 && n5 > n6 && n5 > n7)
	{
		cout << "n5 maximum number" << endl;
	}
	else if (n6 > n2 && n6 > n3 && n6 > n4 && n6 > n5 && n6 > n1 && n6 > n7)
	{
		cout << "n6 maximum number" << endl;
	}
	else if (n7 > n2 && n7 > n3 && n7 > n4 && n7 > n5 && n7 > n6 && n7 > n1)
	{
		cout << "n7 maximum number" << endl;
	}
	else if (n1 == n2 == n3 == n4 == n5 == n6 == n7)
	{
		cout << "all numbers are equal" << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	return 0;
	system("pause");
}