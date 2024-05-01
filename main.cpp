#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout << "enter 4-digit number ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "your number are not 4-digit" << endl;
    }
    int changed_num = (number % 100) * 100 + (number / 100 % 10) * 10 + (number / 1000) * 1000 + (number / 10 % 10);
    cout << "number after change " << changed_num << endl;
	return 0;
	system("pause");
}