// 41. Write a menu driven program to implement following operations on the Queue 
// using an Array 
// • ENQUEUE 
// • DEQUEUE 
// • DISPLAY 

#include<stdio.h>
#define n 5

int Q[n];
int F=-1;
int R=-1;

void enqueue(int x){
    if (R==n-1)
    {
        printf("Queue is Overflow");
        return;
    }
    Q[++R] = x;
    if (F==-1)
    {
        F=0;
        return;
    }
}

int dequeue(){
    if (F==-1)
    {
        printf("Queue is Underflow");
        return -1;
    }
    int y = Q[F];
    if (F==R)
    {
        F=-1;
        R=-1;
    }
    else{
        F++;
    }
    return y;
}

void display(){
   int i=F;
   while (i<=R)
   {
        printf("%d ",Q[i]);
        i++;
   }
   
}

void main(){
    int choice=0;
    int x;
    while (1)
    {
        printf("1.Enqueue");
        printf("2.Dequeue");
        printf("3.Display");
        printf("4.exit");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element");
            scanf("%d",x);
            enqueue(x);  
            break;
        
        case 2:
            printf("Dequeued element:");
            dequeue();
            break;
        
        case 3:
            printf("Elements of Queue:");
            display();
            break;
        case 4:
            return;
        default:
            break;
        }
    }
    
}