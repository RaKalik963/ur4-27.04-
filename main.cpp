#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter num ";
	int num;
	cin >> num;
	if (num < 0)
	{
		cout << "your number negative" << endl;
	}
	else if (num == 0)
	{
		cout << "your number = 0" << endl;
	}
	else
	{
		cout << "your number positive" << endl;
	}
	return 0;
	system("pause");
}