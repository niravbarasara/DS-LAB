// Write a menu driven program to implement following operations on the 
// Doubled Ended Queue using an Array 
// • Insert at front end, Insert at rear end 
// • Delete from front end, Delete from rear end 
// • Display all elements of the queue 

#include <stdio.h>
#define n 5
int DQ[n];
int F=-1;
int R=-1;

void enqueue_rear(int x){
    if (R==n-1)
    {
        printf("Queue is Overflow");
        return;
    }
    DQ[++R] = x;
    if (F==-1)
    {
        F=0;
        return;
    }
}

int dequeue_front(){
    if (F==-1)
    {
        printf("Queue is Underflow");
        return -1;
    }
    int y = DQ[F];
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

void enqueue_front(int x){
    if (F==0)
    {
        printf("Queue is Overflow");
    }
    if (F==-1)
    {
        F=0;
        R=0;
    }
    else{
        F--;        
    }
    DQ[F] = x;
    return;
}

int dequeue_rear(){
    if (R==-1)
    {
        printf("Queue is Underflow");
        return -1;
    }
    int y = DQ[R];
    if (F==R)
    {
        F=-1;
        R=-1;
    }
    else{
        R--;
    }
    return y;
    
}
void display(){
   int i=F;
   while (i<=R)
   {
        printf("%d ",DQ[i]);
        i++;
   }
   printf("\n");
   
}
void main(){
    
    while (1)
    {
        int choice;
        int x;
        printf("1.Insert at front end\n");
        printf("2.Delete at front end\n");
        printf("3.Insert at rear end\n");
        printf("4.Delete at rear end\n");
        printf("5.Display\n");
        printf("Enter Choice:");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("Enter Elemet you want to insert:");
                scanf("%d",&x);
                enqueue_front(x);
                break;
            
            case 2:
                printf("%d",dequeue_front());
                break;

            case 3:
                printf("Enter Elemet you want to insert:");
                scanf("%d",&x);
                enqueue_rear(x);
                break;

            case 4:
                printf("%d",dequeue_rear());
                break;

            case 5:
                display();
                break;
            default:
                break;
        }
    }
    
}