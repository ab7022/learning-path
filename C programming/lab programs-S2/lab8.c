#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// insert delete and display operation in Linear Queue
#define n 3
int front = 0, rear = -1;
int  queue[n];
void insert()
{
    int item;
    if (rear == n - 1)
    {
        printf("\nQueue Full\n");
        /// getch();
    }
    else
    {
        printf("enter the item to be inserted");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    }
}
void delete()
{
    int item;
    if (rear == front - 1)
    {
        printf("\nQueue Empty\n");
        /// getch();
    }
    else if (front == rear) 
     {
        printf("Last item deleted is %d", queue[front]);
        front = 0;
        rear = -1;
    }
    else
    {
        printf("item deleted is %d", queue[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (rear == front - 1)
    {
        printf("\nQueue Empty\n");
        /// getch();
    }
    else
    {
        printf("queue contents are \n");
        for (i = front; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
    }
}
int main()
{
    int ch;
    // clrscr();

    while (1) {
        printf("\t\t\t Queue Program\n");
        printf("\t\t\t1. insert\n");
        printf("\t\t\t2. Delete\n");
        printf("\t\t\t3. Display Queue\n");
        printf("\t\t\t4. Exit\n");
        printf("\t\t\tEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
               insert();
                break;
            case 2:
                delete();
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