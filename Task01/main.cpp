#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Even digits: " << count_even_digits(number);

	return 0;
}