//selection sort
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void selectionsort(int a[], int n)
{
    int i, temp, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i+1 ; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
void main()
{

    int a[10], n, i;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter  elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    selectionsort(a, n);
    printf("sorted elements are:\n");
    {
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
        getch();
    }
}