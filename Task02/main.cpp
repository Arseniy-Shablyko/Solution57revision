#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	bool is_power_of_4 = is_power_of_four(number);
	cout << "Is number power of four: " << (is_power_of_4 ? "Yes" : "No");

	return 0;
}