#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	bool is_digits_number_odd = is_digits_count_odd(number);
	cout << "Is digits count odd: " << (is_digits_number_odd ? "Yes" : "No");

	return 0;
}