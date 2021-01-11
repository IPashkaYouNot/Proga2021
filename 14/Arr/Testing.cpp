#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"
using namespace std;


int main()
{
	int n;
	cout << "Type amount of nums" << endl;
	cin >> n;

	int* arr = Generate_Arr(n);

	Print_Matr(arr, n);

	int size_res;

	int** res = Resulting_Arr(arr, n, size_res);

	Print_Matr(res, size_res);

	Sort(arr, n);
	Print_Matr(arr, n);

	for (int i = 0; i < size_res; i++) {
		delete[] res[i];
	}
	delete[] res;
	delete[] arr;
}
