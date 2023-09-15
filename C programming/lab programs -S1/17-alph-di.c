#include <stdio.h>
#include <conio.h>
void main()
{

    char str[250];
    int vow, con, dig, spa, splc;
    vow = con = dig = spa = splc = 0;
    printf("enter a string\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        {
            ++vow;
        }

        else if ((str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
        {
            ++con;
        }
        else if ((str[i] >= '0' && str[i] <= '9'))
        {
            ++dig;
        }
        else if ((str[i] == " "))
        {
            ++spa;
        }
        else
        {
            ++splc;
        }
    }

         printf("vowels: %d\n", vow);
         printf("consonants: %d\n", con);
         printf("digits: %d\n", dig);
         printf("spaces: %d\n", spa);
         printf("special symobols: %d\n", splc);
}