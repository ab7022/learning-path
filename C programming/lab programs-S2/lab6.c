// sparce
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20][20];
    int i, j, m, n, sparce = 0;
    printf("enter order of matrix");
    scanf("%d%d", &m, &n);
    printf("enter elements");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        if (a[i][j] == 0)
        {
            sparce++;
        }
    }
    if (sparce > ((m * n) / 2))
        printf("The given matrix is sparse! \n");
    // getch();

    else
    {
        printf("The given matrix is not a sparse matrix. \n");
        // getch();
    }
    printf("There are %d numbers of zeros. \n", sparce);
    // getch();
}