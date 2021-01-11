#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"
using namespace std;


int main()
{
	int n;
	cout << "Type size" << endl;
	cin >> n;
	int** arr = Generate_Arr(n);
	Print(arr, n);
	Reflect_Antidiag(arr, n);
	Print(arr, n);
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
