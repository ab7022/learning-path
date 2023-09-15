#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void bubblesort(int a[], int n)
{
    int i, temp, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
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
    bubblesort(a, n);
    printf("sorted elements are:\n");
    {
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
        getch();
    }
}