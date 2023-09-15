
/* int issunday=1;
 int smow=1;
 printf("%d",issunday==smow);*/

/*
int x;
printf("enter a num");
scanf("%d",&x);
printf("%d",x>9 && x<99);*/
/*
    //if else
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    age>=18 ? printf("adult") : printf("not adult");
     /*if (age < 18)
    {
        printf("oops, you cannot drive");
    }
    else{
        printf("hurray, you can drive");
    }*/

// switch case
/*
int day;
printf("enter day");
scanf("%d",&day);
switch (day)

   {
        case 1: printf("today is monday");
        break;
        case 2: printf("today is tuesday");
        break;
        case 3: printf("today is wednesday");
        break;
        case 4: printf("today is thurday");
        break;
        case 5: printf("today is friday");
        break;
        case 6: printf("today is saturday");
        break;
        case 7: printf("today is sunday");
        break;ṇ
    default : printf("invalid input");
   }*/

// EVEN OR ODD
/*int number;
printf("enter num");
scanf("%d",number);
if (number >= 0)

 {
 printf("number is positive\n");
    if (number % 2)
    {
         printf("number is odd");
    }
    else
    {
        printf("number is even");
    }
 }
else
  {
    printf("number is negative");
  }*/

// char ch;
// printf("enter any character");
// scanf("%c",&ch);
// if (ch>= 'a' && ch<= 'z')
// {
//     printf("these are small letters");
// }
// else if (ch>= 'A' && ch<= 'Z')
// {
//     printf("these are capital letters");
// }
// else
// {
//     printf("invalid input");
// }
// }
// #include<stdio.h>
// #include<conio.h>
// int main()
// {

// for (int i = 1; i <= 50; i=i+1)
// {
//     printf("%d\n",i);
// }

// return(0);
// }
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//   int i=1;
//   printf("%d\n",i++);
//     printf("%d",i);
// for (int i = 99; i >= 1; i=i-1)
// {
//     printf("%d\n",i);
// }

// return(0);

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//   for (char ch= 'a'; ch<='z'; ch++)
//   {
//     printf("%c\n",ch);
//   }
//   return(0);
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   int age = 20;
//   int *ptr = &age;

//   printf("%u\n ", &age);
//   printf("%u", ptr);
//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// void square(int n);
// int main()
// {
//   int number = 4;
//   square(number);
//   printf("number is %d\n", number);
//   return 0;
// }
// void square(int n)
// {
//   n = n * n;
//   printf("square is %d\n", n);
// }

// #include<conio.h>
// #include<stdio.h>
// int main()
//   {
//     int total;
//     char name[10];
//     int subject[3];
//     total=subject[0]+subject[1]+subject[2];
//     float perc=(subject[0]+subject[1]+subject[2])/3;
//     printf("please enter student's name");
//     scanf("%c",&name[0]);

//     printf("enter marks for physics");
//     scanf("%d",&subject[0]);

//     printf("enter marks for science");
//     scanf("%d",&subject[1]);

//     printf("enter marks for chemistry");
//     scanf("%d",&subject[2]);

//     printf("student's name: %c\n",name[0]);
//     printf("physics: %d\n",subject[0]);
//     printf("science: %d\n",subject[1]);
//     printf("chemistry: %d\n",subject[2]);
//      total=subject[0]+subject[1]+subject[2];
//     printf("%c total marks is : %d\n",name[0],total);
//     printf("%c percentage is : %d\n",name[0],perc);

//      if (subject[0],subject[1],subject[2]<40)
//      {
//       printf("fail");
//      }

//      else
//      printf("pass");

//     return 0;
//   }



  #include<conio.h>
#include<stdio.h>
int main()
  {
int price=100;
int *ptr = &price;
printf("%u\n",ptr);
 ptr++;
 printf("%u",ptr);
    return 0;
  }