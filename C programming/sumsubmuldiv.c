#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a,b,sum,sub,mul;
    float div;
printf("enter any two numbers");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("sum of %d and %d is %d\n2",a,b,sum);
printf("sub of %d and %d is %d\n",a,b,sub);
printf("mul of %d and %d is %d\n",a,b,mul);
printf("div of %d and %d is %f",a,b,div);

}