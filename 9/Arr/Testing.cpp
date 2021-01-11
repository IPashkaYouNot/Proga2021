#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;


int main()
{
	cout << "Type size, first element of progression and difference: " << endl;
	int n, first, dif;
	cin >> n >> first >> dif;
	int** arr = Generate_Arr(n, first, dif);
	Print_Array(arr, n, n);
	cout << endl;
	Reflect_Antidiag(arr, n);
	Print_Array(arr, n, n);
	cout << endl;
	Print_Main_Diag(arr, n);
	for (int i = 0; i < n; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
}
