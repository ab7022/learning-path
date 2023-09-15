// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     char ch;
//     printf("enter any character");
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z')
//     {
//         printf("these are small letters");
//     }
//     else if (ch >= 'A' && ch <= 'Z')
//     {
//         printf("these are capital letters");
//     }
//     else
//     {
//         printf("invalid input");
//     }
// }
#include <stdio.h>
#include <conio.h>
void swap(int a,int b);
int main()
{
    int x=5, y=7;
    swap(x,y);
    printf("x=%d y=%d",x,y);
    return 0;
}
void swap(int a,int b)
{
int t=a;
int a=b;
int b=t;
printf("x=%d y=%d",a,b);
}