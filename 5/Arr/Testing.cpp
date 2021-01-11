#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"
using namespace std;


int main()
{
	int** arr = Pif();
	Print_Matr(arr, 11);
	Mirror_Antidiag(arr, 11);
	Print_Matr(arr, 11);
	Sort(arr, 11);
	Print_Matr(arr, 11);
}
