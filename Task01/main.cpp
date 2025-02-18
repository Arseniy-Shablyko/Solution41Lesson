#include "logic.h"

#define SIZE 10
#define MAX_MARK 10
#define MIN_MARK 0

int main() {
	int marksA[SIZE];
	int marksB[SIZE];
	int marksC[SIZE];

	init(marksA, SIZE, MIN_MARK, MAX_MARK);
	init(marksB, SIZE, MIN_MARK, MAX_MARK);
	init(marksC, SIZE, MIN_MARK, MAX_MARK);

	cout << "A marks: ";
	cout << convert(marksA, SIZE) << endl;
	cout << "B marks: ";
	cout << convert(marksB, SIZE) << endl;
	cout << "C marks: ";
	cout << convert(marksC, SIZE) << endl;

	double avgA = calculate_avg_mark(marksA, SIZE);
	double avgB = calculate_avg_mark(marksB, SIZE);
	double avgC = calculate_avg_mark(marksC, SIZE);

	cout << "Averege A mark " << avgA << endl;
	cout << "Averege B mark " << avgB << endl;
	cout << "Averege C mark " << avgC << endl;

	if ((avgA > avgC) && (avgA > avgB)) {
		cout << "A";
	}
	else if(avgC > avgB){
		cout << "C";
	}
	else {
		cout << "B";
	}

	return 0;
}