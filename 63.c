// 63. WAP to implement Simple Queue, Circular Queue & Priority Queue using singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;

// Simple Queue

void enqueue(int x){
    struct node *save;
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->info = x;
    
    if (front == NULL)
    {
        n->link = NULL;
        front = n;
        return;
    }
    save = front;
    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = n;
    n->link = NULL;
    rear = save;
}

void dequeue(){
    if (front == NULL)
    {
        printf("Linked List Is empty..");
        return;
    }
    rear = front;
    front = rear->link;
    free(rear);
}

void display(){
    struct node *save = front;

    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }   
    printf("\n");
}

void main(){
    enqueue(50);
    enqueue(40);
    enqueue(30);
    enqueue(20);
    display();
    dequeue();
    dequeue();
    display();
}
