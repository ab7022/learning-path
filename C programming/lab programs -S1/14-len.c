// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     char str[100], i;
//     printf("enter a string");
//     scanf("%s", str);
//     for (i = 0; str[i] != '\0'; ++i)
//         ;
//     {
//         printf("\nlentgh of string is %d", i);
//     }
// }

// #include <stdio.h>
// #include <conio.h>
//                           void
//                           main()
// {
//     int fibo[50], i, n;
//     // clrscr();
//     printf("Enter the number of terms : ");
//     scanf("%d", &n);
//     fibo[0] = 0;
//     fibo[1] = 1;
//     for (i = 2; i < n; i++)
//         fibo[i] = fibo[i - 1] + fibo[i - 2];
//     printf("Fibonacci Numbers are :\n\n");
//     for (i = 0; i < n; i++)
//         printf("%d\n", fibo[i]);
//     getch();
// }
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     float x, y;
// read:
//     printf(“enter x value\n”);
//     scanf(“% f”, &x);
//     if (x < 0)
//         goto read : else y = 1 / x;
//     printf(“% f / t\t % f \n”, x, y);
// }
// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     double x, result;
//     printf("Enter a number\n");
//     scanf("%lf", &x);

//     //  result = sqrt(x);
//     printf("Square root of %lf = %lf\n", x, sqrt(x));
// }
// #include <stdio.h>
// void main()
// {
//     // Initialize array
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("Original array: \n");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
//     printf("\n");

//     printf("Array in reverse order: \n");
//     for (int i = 4; i >= 0; --i)
//         printf("%d ", arr[i]);
// }
#include <stdio.h>
void main()
{
    int i, j, num, Prime;
    /* Input a number from user */
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    /* Find all Prime factors */
    for (i = 2; i <= num; i++)
    {
        /* Check 'i' for factor of num */
        if (num % i == 0)
        {
            Prime = 1;

            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    Prime = 0;
                    break;
                }
            }
            /* If 'i' is Prime number and factor of num */
            if (Prime == 1)
            {
                printf("%d, ", i);
            }
        }
    }
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void main()
// {
//     srand(time(NULL));
//     int i;
//     printf("your otp is ");
//     for (i = 0; i < 5; i++)
//         printf("%d", rand() % 10);
//     printf("\ndon't share it with anyone");
// }
// #include <stdio.h>
// void main()
// {
//     int arr[] = {11, 22, 33, 44, 55};
//     int i, j, n, temp, k;

//     printf("Sorted Elements of array \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     printf("Which smallest element position do you want to determine");
//     scanf("%d", &k);
//     if (k <= n)
//         printf("Desired smallest element is %d\n", arr[k - 1]);
//     else
//         printf("Please enter a valid position ");
// }

// #include <stdio.h>
// void main()
// {

//     int num = 50;
//     int *ptr;   // pointer variable
//     ptr = &num; // store address of variable in pointer

//     printf("Address of num variable %u \n", num);
//     printf("Address of num variable %u \n", &num);
//     printf("Address stored in ptr variable: %u \n", ptr);
//     printf("Value of *ptr variable: %d\n", *ptr);
// }
