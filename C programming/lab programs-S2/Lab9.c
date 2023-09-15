#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// push pop and display operation in stack
#define maxstk 3
int top = -1;
int  stack[maxstk];
void push()
{
    int item;
    if (top == maxstk - 1)
    {
        printf("\nStack Overflow\n");
        /// getch();
    }
    else
    {
        printf("enter the item to be pushed");
        scanf("%d", &item);
        top++;
        stack [top] = item;
    }
}
void pop()
{
    if (top ==- 1)
    {
        printf("\nStack Underflow\n");
        /// getch();
    }
    else
    {
        printf("item popped is %d", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if (top ==-1)
    {
        printf("\nStack is Empty\n");
        /// getch();
    }
    else
    {
        printf("Stack contents are \n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\t", stack[i]);
        }
    }
}
void main(){
     int ch;
     //clrscr();

    while (1) {
        printf("\t\t\t Stack Program\n");
        printf("\t\t\t1. push\n");
        printf("\t\t\t2. pop\n");
        printf("\t\t\t3. Display \n");
        printf("\t\t\t4. Exit\n");
        printf("\t\t\tEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
               push();
                break;
            case 2:
                pop  ();
                break;
            case 3:
                display();
                break;
            case 4:
                exit (0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}