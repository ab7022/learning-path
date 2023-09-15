#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, rem, rev, temp;
    printf("enter a number");
    scanf("%d", &n);
    rev = 0;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 +rem;
    }
    if (rev==temp)
    {
        printf(" a palindrome number");
    }
    else
        printf(" not a palindrome number");
    return 0;
}