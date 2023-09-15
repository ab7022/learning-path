#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,fact=1;
    printf("enter a integer");
    scanf("%d",&n);
    if (n<0)
     {
        printf("Error! please enter positive value");
     }
    else
    for ( i = 1; i <=n; i++)
     {
       fact *= i;

     }
    printf("factorial of %d is %d",n,fact);
    getch(); 
}
