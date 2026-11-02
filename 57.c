// 57. WAP to check whether 2 singly linked lists are same or not.
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *first1 = NULL;

struct node* ins_end(struct node *first,int x){
    struct node *new;
    new = (struct node*) malloc(sizeof(struct node));
    new->info = x;
    
    if (first == NULL)
    {
        new->link = NULL;
        first = new;
        return first;
    }
    struct node *save;
    save = first;
    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = new;
    new->link = NULL;
    return first;
}


int isSame(){
    struct node *save = first;
    struct node *save1 = first1;

    while (save != NULL && save1 != NULL)
    {
        if (save->info != save1->info)
        {
            return 0;
        }
        else
        {
            save = save->link;
            save1 = save1->link;
        }
    }
    if (save == NULL && save1 == NULL)
    {
        return 1;
    }
    return 0;
}
void display(struct node *first){
    struct node *save = first;
    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }
    
}
void main(){
    
    first = ins_end(first,10);
    first = ins_end(first,20);
    first = ins_end(first,30);
    
    printf("First Linked List: ");
    display(first);

    first1 = ins_end(first1,10);
    first1 = ins_end(first1,20);
    first1 = ins_end(first1,30);
    
    printf("\nSecond Linked List: ");
    display(first1);
    printf("\n");

    if(isSame()){
        printf("Same...");
    }
    else
        printf("not same...");
    
}