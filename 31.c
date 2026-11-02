//31. WAP for evaluation of postfix Expression using Stack. 
#include<stdio.h>
#include<ctype.h>
#define n 20
int top=-1;
int S[n];

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
        return 0 ;
    }
	else{
		return S[top--];
	}
}

void evaluate_postfix(char postfix[]){
    int i=0;
    while (postfix[i]!='\0')
    {
    
        if (isdigit(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else{
            int operand2 =pop();
            int operand1 = pop();

            switch (postfix[i])
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
    char postfix[n]="546+*493/+*";
    // char postfix[n]="12+";
    evaluate_postfix(postfix);
}