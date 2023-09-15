// sum of array elements
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int findsum(int a[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return (findsum(a, n - 1) + a[n - 1]);
    }
}
void main()																					
{             
    int i, arr[10], n;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter  elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("sum of array element is %d", findsum(arr, n));
}
