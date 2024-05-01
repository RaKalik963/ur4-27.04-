#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter a 6-digit number ";
    int number;
    cin >> number;

    if (number < 100000 || number > 999999) {
        std::cout << "entered number is not 6-digit number" << std::endl;
    }

    int six1 = number / 100000;
    int six2 = (number / 10000) % 10;
    int six3 = (number / 1000) % 10;
    int six4 = (number / 100) % 10;
    int six5 = (number / 10) % 10;
    int six6 = number % 10;

    if (six1 + six2 + six3 == six4 + six5 + six6) {
        std::cout << "you enter lucky number" << std::endl;
    }
    else {
        std::cout << "you enter UNlucky number" << std::endl;
    }
	return 0;
	system("pause");
}