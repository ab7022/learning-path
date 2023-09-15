//towers of hanoi
#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<stdlib.h>
void hanoi(int n,char s,char i,char d){
if(n==1)
{
    printf("move disk 1 from %c and %c\n",s,d);
    return;
}
hanoi(n-1,s,d,i);
printf("move disk %d from %c to %c\n",n,s,d);
hanoi(n-1,i,s,d);
}
void main(){
    int n,count;
    printf("enter number of disk");
    scanf("%d",&n);
    printf("press ALT+F5 to see output\n");
    {
        getch();
        hanoi(n,'s','i','d');
        count=pow(2,n)-1;
        printf("the number of count is %d",count);
        getch();
    }
}