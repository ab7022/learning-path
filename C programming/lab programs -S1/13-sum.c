#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,sum=0;
    printf("enter a num");
    scanf("%d",&num);
for (i=0; i<=num; i++)
{
    sum=sum+i;
}
    printf("%d",sum);

}