#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;


int main()
{
	cout << "Type size: " << endl;
	int n;
	cin >> n;
	int** arr = Generate_Arr(n);
	Print_Array(arr, n, n);
	cout << endl;
	int** res = Task1(arr, n);
	Print_Array(res, n, 2);
	cout << endl;
	Sort(res, n);
	Print_Array(res, n, 2);
	for (int i = 0; i < n; ++i) {
		delete[] arr[i];
		delete[] res[i];
	}
	delete[] arr;
	delete[] res;
}
