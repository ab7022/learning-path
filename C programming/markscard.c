#include<stdio.h>
#include<conio.h>
int main()
{

int maths,physics,science,biology,grade,total;


printf("enter marks of maths,physics science,biology\n");
scanf("%d%d%d%d",&maths,&physics,&science,&biology);

total=maths+physics+science+biology;
grade=(maths+physics+science+biology)/4;

printf("student's total marks is %d\n",total);

if 
(grade>75)
{
printf("student's passed with distinction");
}
 else if(grade>40)
{
printf("student passed with second class");
}
else
{printf("student failed");}
return 0;
}
