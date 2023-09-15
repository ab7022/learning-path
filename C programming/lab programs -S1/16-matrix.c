#include <stdio.h>
#include <conio.h>
int r, c;
void matadd(int m1[][10], int m2[][10], int m3[][10])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
void main()
{
    int m1[10][10], m2[10][10], m3[10][10], i, j;
    printf("enter number of rows and column");
    scanf("%d%d", &r, &c);
    printf("enter first matrix");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("enter second matrix");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    matadd(m1, m2, m3);
    printf("\n sum matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }
}