#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter num ";
	int num;
	cin >> num;


	if (num % 2 == 0)
	{
		cout << "your number is even" << endl;
	}
	else
	{
		cout << "your number is not even" << endl;
	}
	return 0;
	system("pause");
}