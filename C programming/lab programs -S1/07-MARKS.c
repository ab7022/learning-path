#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int n, a[20], i, total[20], m1[20], m2[20], m3[20];
    float average[20];
    printf("enter number of students");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter marks for students");
        scanf("%d%d%d", &m1[i], &m2[i], &m3[i]);
    }

    for (i = 0; i < 3; i++)
    {
        total[i] = m1[i] + m2[i] + m3[i];
        average[i] = total[i] / 3.0;
    }

    for (i = 0; i < n; i++)
    {
        printf("total marks of student is %d is %d\n", i + 1, total[i]);
        printf("average of student is %d is %f\n", i + 1, average[i]);

        if (average[i] >= 30)
        {
            printf("student is passed\n");
        }
        else
        
            {
              printf("student is failed\n");
            }
    }
}
