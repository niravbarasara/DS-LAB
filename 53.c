// 53. WAP to copy a linked list. 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

struct node* copy(struct node *first){
    if (first == NULL)
    {
        printf("Linked List is empty");
        return first;
    }
    
    struct node *new;
    new = (struct node*) malloc(sizeof(struct node));
    new->info = first->info;
    struct node *first1 = new;

    struct node *save = first;
    
    while (save->link != NULL)
    {
        struct node *save1 =new;
        save = save->link;        
        new = (struct node*) malloc(sizeof(struct node));
        new->info = save->info;
        save1->link = new;
    }
    new->link = NULL;

    struct node *save3;
    save3 = first1;
    while (save3 != NULL)
    {
        printf("%d ",save3->info);
        save3 = save3->link;
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

void main(){
    ins_front(10);
    ins_front(20);
    ins_front(30);
    ins_front(40);
    ins_front(50);
    display();
    printf("\nCopied Linked List: ");
    copy(first);
}