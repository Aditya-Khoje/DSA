#include <stdio.h>

void printArray(int a[], int n)
{
    printf("\nArray is - ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int partition(int a[], int low, int high)
{
    int temp;
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quickSort(int a[], int low, int high)
{
    int partitionIndex; //index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);  //sort left subarray
        quickSort(a, partitionIndex + 1, high); //sort right subarray
    }
}

int main()
{
    int n;
    printf("Enter the no. of elements in array : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printArray(a, n);

    quickSort(a, 0, n - 1);
    printf("After sorting :- ");
    printArray(a, n);

    return 0;
}