// 54. WAP to reverse a linked list. 
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *prev = NULL;

void ins_front(int x){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->info = x;
    if (first == NULL)
    {
        n->link = NULL;
        first = n;
        return;
    }
        n->link = first;
        first = n;
}

struct node *rev_ll(int count){
    while (first != NULL)
    {
        
    }
    
}
void display(){
    struct node *save;
    save = first;

    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }    
}
void main(){
    ins_front(10);
    ins_front(20);
    ins_front(30);
    ins_front(40);
    printf("Linked List:");
    display();
    printf("\nReversed Linked List:");
    rev_ll(4);
    display();
}