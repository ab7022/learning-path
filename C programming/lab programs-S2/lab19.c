//delete an element
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int i, ele, arr[10], n,pos;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter  elements\n");
    for (i = 0; i < n; i++)
    {
	scanf("%d", &arr[i]);
    }
    printf("enter the position to be deleted\n");
    scanf("%d", &pos);
    if(pos>n-1){
        printf("given position doesn't exist");
        getch();
        exit(0);
    }
    else
    {
        ele = arr[pos];
        for ( i = pos+1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
    }
    printf("array after deleting elements\n");
    for ( i = 0; i < n-1; i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}
    
    