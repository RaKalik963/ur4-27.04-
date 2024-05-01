#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter num1 ";
	int x;
	cin >> x;
	cout << "enter num2 ";
	int y;
	cin >> y;
	if (x > y)
	{
		cout << y << ", " << x << endl;
	}
	else if (x == y)
	{
		cout << "x = y" << endl;
	}
	else
	{
		cout << x << ", " << y << endl;
	}
	return 0;
	system("pause");
}