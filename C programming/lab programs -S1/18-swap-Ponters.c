
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//   int x, y, *a, *b, temp;
//   printf("enter a number\n");
//   scanf("%d%d", &x, &y);
//   printf("before swapping\n x=%d\n y=%d\n", x, y);
//   a = &x;
//   b = &y;
//   temp = *a;
//   *a = *b;
//   *b = temp;
//   printf("after swapping\n x=%d\n y=%d\n", x, y);
// }
#include <conio.h>
#include <stdio.h>
void main()
{
  float x, y;
read:
  printf("enter x value\n");
  scanf("% f", &x);
  if (x < 5)
    goto read;
     else y = 1 / x;
  printf("% f / t\t % f \n", x, y);
}
