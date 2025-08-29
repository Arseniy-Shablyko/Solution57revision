#include "logic.h"

int count_digits(int number) {
	if (number < 10) {
		return 1;
	}

	return count_digits(number / 10) + 1;
}

bool is_digits_count_odd(int number) {
	if (number < 0) {
		number *= -1;
	}

	int digit_count = count_digits(number);

	if (digit_count % 2 == 1) {
		return true;
	}

	return false;
}