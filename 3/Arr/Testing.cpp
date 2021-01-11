#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;


int main()
{
	cout << "Type size and amount: " << endl;
	int n, amount;
	cin >> n >> amount;
	double** arr = Generate_Arr(n, amount, -10, 10);
	Print_Array(arr, n, n);
	Sort_by_Snake(arr, n);
	Print_Array(arr, n, n);
	for (int i = 0; i < n; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
}
