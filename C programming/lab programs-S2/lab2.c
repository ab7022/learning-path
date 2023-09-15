/// binary search
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int RBsearch(int a[], int ele, int first, int last)
{
    int mid;
    if (first > last)
    {
        return -1;
    }
    mid = (first + last) / 2;
    if (ele == a[mid])
    {
        printf("element found at position %d", mid + 1);
        getch();
        exit(0);
    }
    if (ele < a[mid])
    {
        last = mid - 1;
        RBsearch(a, ele, first, last);
    }
    if (ele > a[mid])
    {
        first = mid + 1;
        RBsearch(a, ele, first, last);
    }
    return -1;
}
void main()
{
    int i, ele, arr[10], n, result;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter  elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter elements to be searched\n");
    scanf("%d", &ele);
    result = RBsearch(arr, ele, 0, n - 1);
    if (result == -1)
    {
        printf("%d not found", ele);
    }
    getch();
}
