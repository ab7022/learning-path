#include <stdio.h>
#include <conio.h>
void main()
{
    int a[1000], i, n;
    printf("enter size of array");
    scanf("%d", &n);
    printf("enter %d elements in the array:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("elements in the are\t\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}

