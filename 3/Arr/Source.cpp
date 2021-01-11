#include "Header.h"
#include <iostream>
#include <iomanip>
#include <cmath>

double Generate_Real(double min, double max) {
	return (double)rand() / (double)RAND_MAX * (max - min + 1) + min;
}

double** Generate_Arr(int n, int amount, double min, double max) {
	srand(time(NULL));
	double** arr = new double* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new double[n];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (amount) {
				arr[i][j] = Generate_Real(min, max);
				amount--;
			}
			else {
				arr[i][j] = 5;
			}
		}
	}
	return arr;
}

void Print_Array(double** arr, int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << std::setw(7) << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void swap_el(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}

void Sort_by_Snake(double** arr, int n) {
    int k = 0;
	double* temp = new double [n*n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			temp[k] = arr[i][j];
			k++;
		}
	}
	k = 0;
	while (k < n * n - 1) {
		if (temp[k] > temp[k + 1]) {
			swap_el(&temp[k], &temp[k + 1]);
			k = 0;
		}
		else {
			k++;
		}
	}
	k = 0;

	int row = 0;
	for (int i = 0; i < n; ++i) {
		if (row % 2) {
			for (int j = n - 1; j >= 0; j--) {
				arr[i][j] = temp[k];
				k++;
			}
		}
		else {
			for (int j = 0; j < n; ++j) {
				arr[i][j] = temp[k];
				k++;
			}
		}
		row++;
	}
	delete[] temp;
}