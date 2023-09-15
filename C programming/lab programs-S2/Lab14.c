#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define max 50

int s[max];
int top = -1;

void push(int elem)
{
    ++top;
    s[top] = elem;
}

int pop()
{
    int elem;
    elem = s[top];
    --top;
    return elem;
}

int main()
{
    char postfix[max], ch;
    int i, op1, op2, res;

    printf("Program to evaluate postfix expression\n");
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);

    for (i = 0; i < strlen(postfix); i++)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else
        {
            op2 = pop();
            op1 = pop();
            switch (ch)
            {
            case '+':
                res = op1 + op2;
                break;
            case '-':
                res = op1 - op2;
                break;
            case '*':
                res = op1 * op2;
                break;
            case '/':
                res = op1 / op2;
                break;
            case '^':
                res = pow(op1, op2);
                break;
            default:
                printf("Invalid operator\n");
                return 1;
            }
            push(res);
        }
    }

    printf("Result of the above expression = %d\n", pop());

    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n)
// Where n is the length of postfix expression      