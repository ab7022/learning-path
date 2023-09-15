#include <stdio.h>
#include <conio.h>
void main()
{
	int n, i, rem, rev, temp;
    clrscr();
    printf("enter a number");
    scanf("%d", &n);
    rev = 0;
    temp = n;
    while (n > 0)
    {
	rem = n % 10;
	n = n / 10;
	rev = rev * 10 * rem;
    }
    if ( temp==rev)
    {
	printf("%d a palindrome number", temp);
    }
    else
	printf("%d not a palindrome number", temp);
getch();

}