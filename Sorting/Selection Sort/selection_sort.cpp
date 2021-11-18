#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    cout << "\nArray is - ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{
    int n;
    cout << "Enter the no. of elements in array : ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Entered array is : ";
    printArray(a, n);


    return 0;
}