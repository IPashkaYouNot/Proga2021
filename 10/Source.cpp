#include "Header.h"
#include <iostream>

void Change_zeros(int** arr, int n, int m, int ind) {
    for (int j = 0; j < m; j++) {
        if (arr[ind][j] == 0) arr[ind][j] = 6;
    }
}

int** Generate_Matr(int n, int m) {

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 2;
        }
    }
    return arr;
}

int Task(int** arr, int n, int m) {
    int ind = -1;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int temp_counter = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                temp_counter++;
            }
        }
        if (temp_counter >= counter) {
            counter = temp_counter;
            ind = i;
        }
    }
    if (ind == -1) return 0;
    else {
        for (int j = 0; j < m; j++) {
            std::cout << arr[ind][j] << " ";
        }
    }
    return ind;
}

void Print(int** arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
