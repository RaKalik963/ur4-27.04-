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
		cout << y << endl;
	}
	else if (x == y)
	{
		cout << "x = y" << endl;
	}
	else
	{
		cout << x << endl;
	}
	return 0;
	system("pause");
}