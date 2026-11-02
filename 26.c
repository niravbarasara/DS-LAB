// 26. Removing starts from a string Problem
#include<stdio.h>
#include<string.h>
#define n 100
int top=-1;
char S[n];

void push(char x){

    if (top>=n-1)
    {
        printf("Stack is Overflow\n");
    }
    else{
        S[++top] = x;
    }
}

char pop(){
    if (top==-1)
    {
        printf("Stack is Underflow");
    }
    else
        return S[top--];
}

char validstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]=='*')
        {
            if (top>=0)
            {
                pop();
            }
        }
        else{
            push(str[i]);
        }
        i++;
    }
 
}

void main(){
    char str[n]= "leet**cod*e";
    validstr(str);

    for (int i = 0; i <= top; i++)
    {
        printf("%c",S[i]);
    }

}