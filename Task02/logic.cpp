#include "logic.h"

bool is_power_of_four(int number) {
	if (number < 0) {
		return false;
	}

	if (number == 4) {
		return true;
	}
	else if (number < 4) {
		return false;
	}

	return is_power_of_four(number / 4);
}