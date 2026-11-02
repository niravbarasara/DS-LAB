// 58. WAP to remove duplicate elements from a singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *first = NULL;

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
    return;
}


void remove_dub(){
    struct node *save = first;
    struct node *temp ;
    while (save != NULL)
    {
        temp = save->link;
        while (temp != NULL)
        {
            if (save->info == temp->info)
            {
                save
            }
            
        }
        
    }
    
}