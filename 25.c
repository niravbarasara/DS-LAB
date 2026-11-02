// 25. Valid Parenthesis Problem

#include <stdio.h>
#include <string.h>

#define MAX 1000

int isBalanced(char str[])
{
    char stack[MAX];
    int top = -1;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        // Opening brackets
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            stack[++top] = str[i];
        }

        // Closing brackets
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            // Stack is empty
            if (top == -1)
                return 0;

            // Check matching brackets
            if ((str[i] == ')' && stack[top] == '(') ||
                (str[i] == '}' && stack[top] == '{') ||
                (str[i] == ']' && stack[top] == '['))
            {
                top--;
            }
            else
            {
                return 0;
            }
        }
    }

    // If stack is empty, brackets are balanced
    if (top == -1)
        printf("VALID");
    else
        printf("INVALID");
}

void main()
{
    int T;
    char str[MAX];

    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", str);

        printf("%d\n", isBalanced(str));
    }
}

