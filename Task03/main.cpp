#include <iostream>
using namespace std;
#define N 5
#define MAX 10

int sum_main_elements(int matrix[N][N]) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + matrix[i][i];
	}

	return sum;
}

int sum_add_elements(int matrix[N][N]) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + matrix[i][N - 1 - i];
	}

	return sum;
}

int main() {
	int matrix[N][N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << "[" << i << ", " << j << "] ";
		}
		cout << endl;
	}

	cout << "Sum of elements of main diogonale is " <<sum_main_elements(matrix) << endl;
	cout << "Sum of elements of add diogonale is " << sum_add_elements(matrix) << endl;


	return 0;
}