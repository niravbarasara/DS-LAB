// 62. WAP to implement Stack using singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *top = NULL;

void push(int x){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->info = x;
    if (top == NULL)
    {
        n->link = NULL;
        top = n;
        return;
    }
        n->link = top;
        top = n;
}

void pop(){
    struct node *save;
    if (top == NULL)
    {
        printf("Stack Is empty..");
        return;
    }
    save = top;
    top = save->link;
    free(save);
}
void display(){
    struct node *save;
    save = top;

    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }   
    printf("\n");
}
void main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();

}