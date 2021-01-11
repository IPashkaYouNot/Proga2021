#include "Header.h"
#include <iostream>
#include <iomanip>
#include <cmath>

void Reflect_Antidiag(int** arr, int rows) {
	double tmp;
	for (int i = 0; i < rows - 1; ++i) {
		for (int j = 0; j < rows - i; ++j) {
			tmp = arr[i][j];
			arr[i][j] = arr[rows - 1 - j][rows - 1 - i];
			arr[rows - 1 - j][rows - 1 - i] = tmp;
		}
	}
}

int** Generate_Arr(int n, int first, int dif) {
	int** arr = new int* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; ++i) {
		if (i % 2) {
			for (int j = n - 1; j >= 0; --j) {
				arr[i][j] = first;
				first += dif;
			}
		}
		else {
			for (int j = 0; j < n; ++j) {
				arr[i][j] = first;
				first += dif;
			}
		}
		
	}
	return arr;
}

void Print_Main_Diag(int** arr, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i][i] << " ";
	}
	std::cout << std::endl;
}

void Print_Array(int** arr, int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << std::setw(3) << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
