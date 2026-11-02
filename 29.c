// WAP to convert infix notation to postfix notation using stack.

#include <stdio.h>
#include <string.h>

#define n 25

int top = -1;
char S[n];
char polish[n];

void push(char ele)
{
    if (top >= n - 1)
    {
        printf("Stack Overflow...\n");
    }
    else
    {
        S[++top] = ele;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("Stack is underflow...\n");
        return '\0';
    }
    else
    {
        return S[top--];
    }
}

int R(char x)
{
    if (x == '+' || x == '-' || x == '*' ||
        x == '/' || x == '^')
    {
        return -1;
    }
    else
        return 1;
}

int G(char x)
{
    if (x == '+' || x == '-')
        return 2;
    else if (x == '*' || x == '/')
        return 4;
    else if (x == '^')
        return 5;       
    else if (x == '(')
        return 0;
    else
        return 8;
}

int F(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 3;
    else if (x == '^')
        return 6;
    else if (x == '(')
        return 9;
    else
        return 7;
}

void revpol(char *infix)
{
    char next;
    int i, j = 0;
    char temp;
    int Rank = 0;

    top = -1;    
    push('(');

    i = 0;
    next = infix[i];

    while (next != '\0')
    {
        while (G(S[top]) > F(next))
        {
            temp = pop();

            polish[j++] = temp;

            Rank = Rank + R(temp);

            if (Rank < 1)
            {
                printf("INVALID\n");
                return;
            }
        }

        if (G(S[top]) != F(next))
        {
            push(next);
        }
        else
        {
            pop();
        }

        i++;
        next = infix[i];
    }

    polish[j] = '\0';

    if (top != -1 || Rank != 1)
    {
        printf("INVALID\n");
    }
    else
    {
        printf("POLISH: %s\n", polish);
    }
}

int main()
{
    char infix[] = "a+b-c";
    char temp[n];
    revpol(temp);

    return 0;
}