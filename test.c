#include<string.h>
#define n 50
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
    else{
        return S[top--];
    }
}

char validstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]=='*')
        {
            printf("HELLO");
            pop();
        }
        else{
            push(S[i]);
        }
        i++;
    }
 
}

void main(){
    char str[n]= "leet**cod*e";
    int i=0;
    validstr(str[n]);
  
    for (int i = 0; i <= top; i++)
    {
        printf("%c",S[i]);
        
    }
}