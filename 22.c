// 22. Write a menu driven program to implement following operations on the Stack  using an Array 
#include <stdio.h>
#define n 5
int top=-1;
int S[n];

void push(int x){

    if (top>=n-1)
    {
        printf("Stack is Overflow\n");
    }
    else{
        S[++top] = x;
    }
}

int pop(){
    if (top==-1)
    {
        printf("Stack is Underflow");
    }
    else
        return S[top--];
}

int display(){
    printf("\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d",S[i]);
    }
    printf("\n");
}

int peep(int pos){
    if (top-pos+1>-1)
    {
        return S[top-pos+1];
    }
}
void change(int x,int pos){
    if (top-pos+1>-1)
    {
        S[top-pos+1] == x;
    }
}
void main(){
    int choice;
    int x;
    int pos;
    while (1==1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n");

        printf("Enter choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter Element to insert: ");
            scanf("%d",&x);
            push(x);
            break;
        case 2:
            pop();
        case 3:
            display();
            break;
        case 4:
            printf("Enter pos of Element : ");
            scanf("%d",&pos);
            peep(pos);
            break;
        case 5:
            printf("Enter pos of Element : ");
            scanf("%d",&pos);
            printf("Enter Element to insert: ");
            scanf("%d",&x);
            change(pos,x);
        default:
            printf("INVALID CHOICE");
            break;
    }
    }
    
    
}