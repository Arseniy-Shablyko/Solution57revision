#include "logic.h"

int count_even_digits(int number) {
	if (number < 0) {
		number *= -1;
	}

	if ((number % 2 == 0) && (number < 10)) {
		return 1;
	}
	else if ((number % 2 == 1) && (number < 10)) {
		return 0;
	}

	if ((number % 10) % 2 == 0) {
		return count_even_digits(number / 10) + 1;
	}
	else {
		return count_even_digits(number / 10);
	}
}