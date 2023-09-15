// insert an element
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int i, ele, arr[10], n, pos;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter  elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the position to be inserted\n");
    scanf("%d", &pos);
    printf("enter the element to be inserted\n");
    scanf("%d", &ele);
    if (pos > n)
    {
        printf("out of array limits");
        getch();
        exit(0);
    }
    else
    {
        for (i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
            
        }
        arr[pos]=ele;
        n++;
        
    }
    printf("array after insering elements\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    getch();
}
