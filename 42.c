// 42. Write a menu driven program to implement following operations on a circular 
// queue using an Array 
// • Insert 
// • Delete 
// • Display all elements of the queue 

#include <stdio.h>
#define n 10
int F=-1;
int R=-1;
int Q[n];
void insert(int x){
    if ((R+1)%n == F)
    {
        printf("Queue is overflow");
        return;
    }
    R=(R+1)%n;
    Q[R] = x;
    if (F==-1)
    {
        F=0;
        return;
    }
}

int delete(){
    if (F==-1)
    {
        printf("Queue is underflow");
        return -1;
    }
    int y=Q[F];
    if (F==R)
    {
        F=-1;
        R=-1;
        return y;
    }
    F=(F+1)%n;
    return y;
}

void display(){
    int i=F;
    if (i==-1)
    {
        printf("Queue is empty\n");
    }
    
    while (i<=R)
    {
        printf("%d ",Q[i]);
        i = (i+1)%n;
    }
}

void main(){
    int choice;
    int x;
    while (1)
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element: \n");
            scanf("%d",&x);
            insert(x);  
            break;
        
        case 2:
            printf("Deleted element: \n");
            delete();
            break;
        
        case 3:
            printf("Elements of Queue: \n");
            display();
            break;
        case 4:
            return;
        default:
            break;
        }
    }
    
}