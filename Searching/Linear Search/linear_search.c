#include <stdio.h>

int linearSearch(int a[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the no. of elements in array : ");
    scanf("%d", &n);

    // how to find array size
    // int size = sizeof(a)/sizeof(a[0]);
    // or
    // int size = sizeof(a)/sizeof(datatype);
    // int size = sizeof(a)/sizeof(int);

    int a[n];
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int num;
    printf("Enter element to find : ");
    scanf("%d", &num);

    int index = linearSearch(a, n, num);

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