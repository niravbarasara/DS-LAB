// 29. WAP to convert infix notation to prefix notation using stack

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define n 50

char S[n];
int top = -1;

char polish[n];
int j = 0;

void push(char ele)
{
    if (top >= n - 1)
        printf("Stack Overflow\n");
    else
        S[++top] = ele;
}

char pop()
{
    if (top == -1)
        return '\0';
    else
        return S[top--];
}

int G(char ch)
{
    switch (ch)
    {
        case '+':
        case '-':
            return 2;

        case '*':
        case '/':
            return 4;

        case '^':
            return 5;

        case '(':
            return 0;

        default:
            return 8;
    }
}

int F(char ch)
{
    switch (ch)
    {
        case '+':
        case '-':
            return 1;

        case '*':
        case '/':
            return 3;

        case '^':
            return 6;

        case '(':
            return 9;

        case ')':
            return 0;

        default:
            return 7;
    }
}

void reverse(char str[])
{
    int i = 0;
    int k = strlen(str) - 1;
    char temp;

    while (i < k)
    {
        temp = str[i];
        str[i] = str[k];
        str[k] = temp;

        i++;
        k--;
    }
}


void revpol(char infix[])
{
    char next, temp;
    int i = 0;

    j = 0;
    top = -1;
    reverse(infix);

    for (i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';

        else if (infix[i] == ')')
            infix[i] = '(';
    }
    push('(');

    i = 0;
    next = infix[i];

    while (next != '\0')
    {
        while (G(S[top]) > F(next))
        {
            temp = pop();
            polish[j++] = temp;
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

    while (top != -1)
    {
        temp = pop();

        if (temp != '(')
            polish[j++] = temp;
    }

    polish[j] = '\0';
    reverse(polish);
    printf("Prefix: %s", polish);
}

int main()
{
    char infix[n];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    revpol(infix);

    return 0;
}