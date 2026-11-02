#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;

// Circular Queue
void enqueue(int x){
    struct node *save;
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->info = x;
    
    if (rear == NULL)
    {
        n->link = NULL;
        front = rear = n;
        rear->link = front;
        return;
    }

    n->link = front;
    rear->link = n;
    rear = n;
}

void dequeue(){
    if (front == NULL)
    {
        printf("Circular Queue Is empty..");
        return;
    }
    struct node *save = front;
    front = save->link;
    free(save);
}
void display(){
    struct node *save = front;

    while (save != rear)
    {
        printf("%d ",save->info);
        save = save->link;
    }   
    printf("\n");
}
void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();

}

