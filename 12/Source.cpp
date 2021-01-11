#include "Header.h"
#include <iostream>
#include <iomanip>
#include <cmath>


int** Generate_Arr(int n) {
	srand(time(NULL));
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < i) {
				arr[i][j] = 2 - arr[j][i];
			}
			else if (j > i) {
				arr[i][j] = rand() % 3;
			}
			else {
				arr[i][j] = 0;
			}
		}
	}
	return arr;
}


void Print_Array(int** arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << std::setw(3) << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int** Task1(int** arr, int n) {
	int** res = new int* [n];
	for (int i = 0; i < n; ++i) {
		res[i] = new int[2];
	}
	for (int i = 0; i < n; ++i) {
		res[i][0] = i+1;
		res[i][1] = 0;
		for (int j = 0; j < n; ++j) {
			res[i][1] += arr[i][j];
		}
	}
	return res;
}

void swap_el(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Sort(int** arr, int n) {
	int i = 0;
	while (i < n - 1) {
		if (arr[i][1] < arr[i + 1][1]) {
			for (int j = 0; j < 2; j++) {
				swap_el(&arr[i][j], &arr[i + 1][j]);
			}
			i = 0;
		}
		else {
			i++;
		}
	}
}