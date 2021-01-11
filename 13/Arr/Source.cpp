#include "Header.h"
#include <iostream>
#include <iomanip>
#include <cmath>

int** Generate_Arr(int n) {
	int** arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	srand(time(NULL));
	for (int j = 0; j < n; j++) {
		arr[0][j] = rand() % 20;
		arr[1][j] = arr[0][j];
	}
	for (int i = 2; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = arr[i - 2][j] + arr[i - 1][j];
		}
	}

	return arr;
}

void Print(int** arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << std::setw(4) << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Reflect_Antidiag(int** arr, int rows) {
	for (int i = 0; i < rows - 1; ++i) {
		for (int j = 0; j < rows - i; ++j) {
			swap_el(&arr[i][j], &arr[rows - 1 - j][rows - 1 - i]);
		}
	}
}


void swap_el(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}