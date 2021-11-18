#include <stdio.h>

// int binarySearch(int a[], int num, int low, int high)
// {
//     int mid;
//     mid = (low + high) / 2;
//     if (num == a[mid])
//     {
//         return mid;
//     }
//     else if (num < a[mid])
//     {
//         binarySearch(a, num, 0, mid - 1);
//     }
//     else if (num > a[mid])
//     {
//         binarySearch(a, num, mid + 1, high);
//     }
//     return -1;
// }

int binarySearch(int a[], int n, int num)
{
    int low, mid, high;
    low = 0;
    high = n-1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (num == a[mid])
        {
            return mid;
        }
        else if (num < a[mid])
        {
            high = mid - 1;
        }
        else if (num > a[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the no. of elements in array : ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements : "); // for binary search array must be sorted
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int num;
    printf("Enter element to find : ");
    scanf("%d", &num);

    // int index = binarySearch(a, num, 0, n-1);
    int index = binarySearch(a, n, num);

    if (index >= 0)
    {
        printf("The element %d found on index %d", a[index], index);
    }
    else
    {
        printf("%d is not present in array", num);
    }

    return 0;
}