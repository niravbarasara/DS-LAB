//31. WAP for evaluation of prefix Expression using Stack. 
#include<stdio.h>
#include <string.h>
#include<ctype.h>
#define n 20
int top=-1;
int S[n];
char* rev(char prefix[]){
    int i=0;
    int j=strlen(prefix)-1;
    char temp;
    while (i<j)
    {
        temp = prefix[i];
        prefix[i] = prefix[j];
        prefix[j] = temp;  
        i++;
        j--;
    }
    return prefix;
}
void push(int ele){
	if(top>=n-1){
		printf("Stack Overflow...\n");
	}
	else{
		S[++top]=ele;
	}
}
int pop(){
	if(top==-1){
		printf("Stack is underflow...\n");
	}
	else{
		return S[top--];
	}
}

void evaluate_prefix(char prefix[]){
    int i=0;
    while (prefix[i]!='\0')
    {
    
        if (isdigit(prefix[i]))
        {
            push(prefix[i]-'0');
        }
        else{
            int operand1 =pop();
            int operand2 = pop();

            switch (prefix[i])
            {
            case '+':
                push(operand1 + operand2);
                break;
            
                
            case '-':
                push(operand1 - operand2);
                break;
            
            
            case '*':
                push(operand1 * operand2);
                break;
            
                
            case '/':
                push(operand1 / operand2);
                break;
            
            default:
                printf("INVALID OPERATOR");
                break;
            }
        }
        i++;
    }
    printf("%d",pop());
    
    
}

void main(){
    char prefix[]="-13";
    char *reversed = rev(prefix);
    evaluate_prefix(reversed);
}