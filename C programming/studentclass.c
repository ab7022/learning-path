#include<stdio.h>
#include<conio.h>
void main()
{
int percentage;
printf("enter percentage");
scanf("%d",&percentage);
if (percentage>=0)
    if (percentage>=40)
         printf("student passed with \n");
         if (percentage>=90)
         {
         printf("distinction");
         }
         else if (percentage>=75 && percentage<89)
         {
         printf("1st class");
         }
         else if (percentage>=50 && percentage<74)
         {
         printf("2nd class");
         }
         else if (percentage>39 && percentage<49)
         {
         printf("3rd class");
         }
         else{
            printf("FAILED");
         }
         
     
         




}