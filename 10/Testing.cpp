#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;


int main()
{
    cout << "Enter size" << endl;
    int n, m;
    cin >> n >> m;
    int** arr = Generate_Matr(n, m);
    Print(arr, n, m);
    cout << endl;
    int ind = Task(arr, n, m);
    cout << endl;
    Change_zeros(arr, n, m, ind);
    cout << endl;
    Print(arr, n, m);
}
