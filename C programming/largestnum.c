#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter any 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if
(a>b && a>c)
printf("%d is largest number of %d and %d",a,b,c);
else if  
(b>c)
printf("%d is largest number of %d and %d",b,c,a);
else
printf("%d is largest number of %d and %d",c,a,b);
}