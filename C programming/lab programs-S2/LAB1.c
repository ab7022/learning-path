// linear search
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int i, ele, arr[10], n;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter  elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter elements to be searched\n");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            printf("\n element found at position %d", i + 1);
            exit(0);
        }
    }
    printf("\n element not found ");
    getch();
    exit(0);
}
