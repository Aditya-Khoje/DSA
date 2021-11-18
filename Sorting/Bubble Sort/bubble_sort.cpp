#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble_sort_asc(int *a, int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;

                // we can use swap() function insted
                // swap(a[j],a[j+1]);
            }
        }
    }
}

void bubble_sort_dsc(int *a, int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements in array : ";
    cin >> n;

    int a[n];

    cout << "Enter the elements in array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Unsorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;

    bubble_sort_asc(a, n);

    cout << "Sorted array in ascendeing order : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;

    bubble_sort_dsc(a, n);

    cout << "Sorted array in descending order : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;
}