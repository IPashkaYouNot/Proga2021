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

int* Generate_Arr(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101 - 100;
    }
    return arr;
}

void swap_el(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int** Resulting_Arr(int* nums, int amount, int& size) {
    
    size = (pow(amount, 1.0 / 2) - (int)pow(amount, 1.0 / 2) > 0) ? (int)pow(amount, 1.0 / 2) + 1 : (int)pow(amount, 1.0 / 2);

    int** arr = new int* [size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
    }

    int k = 0;         

    for (int i = 0; i < size; i++) {
        if (i % 2) {
            for (int j = size-1; j >= 0; j--) {
                if (k < amount) {
                    arr[i][j] = nums[k];
                    k++;
                }
                else {
                    arr[i][j] = 9;
                }
            }
        }
        else {
            for (int j = 0; j < size; j++) {
                if (k < amount) {
                    arr[i][j] = nums[k];
                    k++;
                }
                else {
                    arr[i][j] = 9;
                }
            }
        }
    }
    
    return arr;
}

void Sort(int* arr, int n) {
    int i = 0;
    while (i < n - 1) {
        if (arr[i] < arr[i + 1]) {
            swap_el(&arr[i], &arr[i + 1]);
            i = 0;
        }
        else {
            i++;
        }
    }
}