#include <stdio.h>
#include <conio.h>
void insertionsort(int a[], int n)
{
    int i, j, item;
    for (i = 1; i < n; i++)
    {
        item = a[i];
        j = i - 1;
        while (a[j] > item && j >= 0)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = item;
    }
}
int main()
{
    int a[20], i, n;
    printf("enter the size of the array : ");
    scanf("%d", &n);
    printf("enter the array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insertionsort(a, n);
    printf("the sorted array is : \n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}