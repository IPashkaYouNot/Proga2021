#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"
using namespace std;


int main()
{
	int n;
	cout << "Type amount of lines" << endl;
	cin >> n;
	string* arr = Input(n);
	int min = Find_Min(arr, n);
	cout << min + 1 << endl;
	Del_word(arr, min);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;
}
