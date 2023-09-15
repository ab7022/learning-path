#include <stdio.h>
#include <conio.h>
void bubblesort(int a[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
	for (j = 1; j < n; j++)
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
    int a[20], i, n;
    printf("\nenter the number of elements");
    scanf("%d", &n);
    printf("\nenter any elements\n");
    for (i = 0; i < n; i++)

    {
	scanf("%d", &a[i]);
    }
    bubblesort(a, n);
    printf("sorted elements are \n");
    for (i = 0; i < n; i++)
    {
	printf("%d\n", a[i]);
    }
    getch();
}