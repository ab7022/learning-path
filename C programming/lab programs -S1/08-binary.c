#include<stdio.h>
#include<conio.h>
void main()
{
    int i,low,mid,high,key,array[100],n;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements in sorted order");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter elements to be searched");
    scanf("%d",&key);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while (low<=high)
    {
        if (array[mid]<key)
        low=mid+1;
        else if (array[mid]==key)
        {
            printf("%d found at location %d",key,mid+1);
            break;
        }
        else
        high=mid-1;
        mid=(low+high)/2;
    }
    if (low>high)
    {
       printf("not found: %d is not present in the list\n",key);
    }
    printf("\nyes this code is working :D");

}