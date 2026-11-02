// 56. WAP to remove the duplicates nodes from given sorted Linked List.
// Input: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27
// Output: 1 → 6 → 13 → 27

#include <stdio.h>
#include <stdlib.h>

struct node 
{
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

void remove_dup(){
    struct node *save = first;
    while (save != NULL && save->link != NULL)
    {
        if (save->info == save->link->info)
        {
            save->link = save->link->link;
        }
        else{
            save = save->link;
        }
    }  
} 

void display(){
    struct node *save = first;
    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }
    printf("\n");
}

void main(){
    ins_end(10);
    ins_end(10);
    ins_end(20);
    ins_end(20);
    ins_end(30);
    display();

    printf("After Removing Duplicates: ");
    remove_dup();
    display();

}