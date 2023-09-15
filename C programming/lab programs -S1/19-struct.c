#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int roll;
    float marks;
} s[2];
int main()
{
    // struct student s[3];
    int i;
    printf("student information\n");
    for (i = 0; i < 3; ++i)
    {
        s[i].roll = i + 1;
        printf("\nenter roll no: %d", s[i].roll);
        printf("\nenter name:");
        scanf("%s",&s[i].name);
        printf("\nenter marks:");
        scanf("%f", &s[i].marks);
    }

    printf("\ndisplay information");
    for (i = 0; i < 3; ++i)
    {
        printf("\nroll no is %d", i + 1);
        printf("\nname is %d");
        puts(s[i].name);
        printf("\nmarks is %f", s[i].marks);
    }
    return 0;
}

// #include <stdio.h>
// #include<conio.h>
// struct student
// {
// char name[50];
// int roll;
// float marks;
// };
// int main()
// {
// struct student s[3];
// int i;

// printf("Enter information of students:\n");
// for(i=0;i<3;++i)
// {
// s[i].roll=i+1;
// printf("\nFor roll number %d\n",s[i].roll);
// printf("Enter name: ");
// scanf("%s",s[i].name);
// printf("Enter marks: ");
// scanf("%f",&s[i].marks);
// printf("\n");
// }
// printf("Displaying information of students:\n\n");
// for(i=0;i<3;++i)
// {
// printf("\nInformation for roll number %d:\n",i+1);
// printf("Name: ");
// puts(s[i].name);
// printf("Marks: %.1f",s[i].marks);
// }
// return 0;
// }