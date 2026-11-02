// Vowel Anxiety Problem 
#include<stdio.h>
#define n 100   
int top=-1;
char S[n];
void push(char ele){
	if(top>=n-1){
		printf("Stack Overflow...\n");
	}
	else{
		S[++top]=ele;
	}
}

char pop(){
	if(top==-1){
		printf("Stack is underflow...\n");
	}
	else{
		return S[top--];
	}
}

int isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
    {
        return 1;
    }

    return 0;
}
void vowel_anxiety(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        if (isVowel(str[i]))
        {
            int j;
            for (j = 0; j <= (top) / 2; j++)
            {
                char temp;

                temp = S[j];
                S[j] = S[top - j];
                S[top - j] = temp;
            }
            push(str[i]);
        }
        else{
            push(str[i]);
        }
        i++;
    }
    for (i = 0; i <= top; i++)
    {
        printf("%c", S[i]);
    }    
}
void main(){
    char str[]="abcdefghij";
    vowel_anxiety(str);
}