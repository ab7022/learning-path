#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    // printf("*************lentgh of string********strlen*********");
   char string1[25],string2[25];
   int l;
   clrscr();
    // printf("\nenter a string\n");
    // scanf("%s",string1);
    // // l= strlen(string1);
    // printf("\nlength of string is %d",strlen(string1));



    // printf("*************string concatenation******strcat***********");
    //  printf("\nenter two string\n");
    // scanf("%s%s",string1,string2);
    // printf("string conatination applied %s",strcat(string1,string2));


    // printf("*************string comparison*********strcmp********");
    //  printf("\nenter two string\n");
    // scanf("%s%s",string1,string2);
    // if(strcmp(string1,string2)==0)
    // printf("\nstrings are equal");
    // else
    // printf("\nstrings are not equal");

    printf("*************string copy*********strcpy********");
     printf("\nenter two string\n");
    scanf("%s%s",string1,string2);

    printf("string1 is %s and string string 2is %s\n",string1,string2);
    strcpy(string1,string2);

    printf("string1 is %s and string string 2is %s\n",string1,string2);
 getch();

}