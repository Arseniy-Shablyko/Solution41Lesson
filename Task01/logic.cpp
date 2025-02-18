#include "logic.h"
double calculate_avg_mark(int* marks, int size) {
	double avg = 0;
	for (int i = 0; i < size; i++) {
		avg = avg + marks[i];
	}

	return avg / size;
}