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

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }

    for (int i = 0; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
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

    mergeSort(a, 0, n - 1);
    cout << "\nAfter sorting array : ";
    printArray(a, n);

    return 0;
}