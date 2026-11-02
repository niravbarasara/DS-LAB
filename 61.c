// 61.WAP to swap two consecutive nodes in the linked list. Don’t change the values of
// nodes, implement by changing the link of the nodes.

#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};

struct node* first = NULL;

void insert_end(int x){
	struct node *new;
	new=(struct node*) malloc(sizeof(struct node));
	new->info = x;
	if(first == NULL){
		new->link = NULL;
		first = new;
		return;	
	}
	struct node *save = first;
	
	while(save->link != NULL){
		save = save->link;
	}
	save->link = new;
	new->link = NULL;
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

void swap_consecutive(){
    struct node *save = first;
    struct node *temp = first;

    //1 2 3 4 5 

    while (save != NULL && save->link != NULL)
    {
		
    }
    
}