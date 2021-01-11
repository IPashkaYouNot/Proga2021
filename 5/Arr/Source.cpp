#include "Header.h"
#include <iostream>
#include <iomanip>
#include <cmath>

void Print_Matr(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(4) <<arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void Print_Matr(int* arr, int n) {
    for (int i = 0; i < n; i++) {
            std::cout << std::setw(4) << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

void swap_el(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void Sort(int** arr, int n) {
    int i = n - 1;
    while (i > 0) {
        if (arr[i][n - i - 1] < arr[i - 1][n - (i - 1) - 1]) {
            swap_el(&arr[i][n - i - 1], &arr[i - 1][n - (i - 1) - 1]);
            i = n - 1;
        }
        else {
            i--;
        }
    }
}

int** Pif() {
    int** arr = new int* [11];
    for (int i = 0; i < 11; i++) {
        arr[i] = new int[11];
    }
    arr[0][0] = 0;
    for (int j = 1; j < 11; j++) {
        arr[0][j] = j;
        arr[j][0] = j;
    }
    for (int i = 1; i < 11; i++) {
        for (int j = 1; j < 11; j++) {
            arr[i][j] = i * j;
        }
    }
    return arr;
}

void Mirror_Antidiag(int** arr, int rows) {
    for (int i = 0; i < rows - 1; ++i) {
        for (int j = 0; j < rows - i; ++j) {
            swap_el(&arr[i][j], &arr[rows - 1 - j][rows - 1 - i]);
        }
    }
}