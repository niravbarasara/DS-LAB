// 52. Write a menu driven program to implement following operations on the singly 
// linked list.  
// • Insert a node at the front of the linked list. 
// • Insert a node at the end of the linked list. 
// • Insert a node by preserving the order of the data of the linked list. (Ordered 
// insertion) 
// • Display all nodes. 
// • Delete the first node of the linked list. 
// • Delete the last node of the linked list. 
// • Delete a node from specified position of the list. 
// • Count the no. of nodes in the linked list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

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

void ins_end(int x){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->info = x;
    
    if (first == NULL)
    {
        n->link = NULL;
        first = n;
        return;
    }
    struct node *save;
    save = first;
    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = n;
    n->link = NULL;
}

void ins_ord(int x){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->info = x;
    
    if (first == NULL)
    {
        n->link = NULL;
        first = n;
        return;
    }
    
    if (n->info <= first->info)
    {
        n->link = first;
        first = n;
        return;
    }

    struct node *save;
    save = first;

    while (save->link != NULL && n->info >= save->info)
    {
        n->link = save->link->link;
        save->link = n->link;
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

void del_first(){
    struct node *save;
    if (first == NULL)
    {
        printf("Linked List Is empty..");
        return;
    }
    save = first;
    first = save->link;
    free(save);
}

void del_last(){
    struct node *save;
    struct node *pred;

    if (first == NULL)
    {
        printf("Linked List Is empty..");
        return;
    }
    save = first;
    pred = first;
    while (save->link != NULL)
    {
        pred = save;
        save = save->link;
    }
    pred->link = NULL;
    free(save);
}

void del_pos(int x){
    struct node *save;
    struct node *pred = first;
    save = first;
    if (first == NULL)
    {
        printf("Linked list is empty..");
        return;
    }
    
    while (save->info!=x && save->link != NULL)
        {
            pred = save;
            save = save->link;
        }    
            
        if (save->info != x)
        {
            printf("Node not found..\n");
            return;
        }
        if (save == first)
        {
            first = first->link;
            free(save);
            return;
        }
        pred->link = save->link;
        free(save);
            
    }

void numOfnodes(){
    struct node *save;
    save = first;
    int count = 0;
    while (save != NULL)
    {
        count++;
        save = save->link;
    }
    printf("Number of nodes in linked list: %d",count);
}
int main(){
    ins_front(10);
    ins_front(20);
    ins_end(30);
    ins_ord(15);
    display();
    del_first();
    del_last();
    del_pos(10);
    numOfnodes();
    printf("\n nodes after deletion\n");
    display();

    return 1;
}