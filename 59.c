// 59. WAP to swap Kth node from beginning with Kth node from end in a singly linked list.

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

int count(){
    struct node* save = first;

    int count;
    if (first == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        while (save != NULL)
        {
            count++;
            save = save->link;
        }
        
    }
    return count;   
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
void swapK(int k){
    int n =count();
    if (k>n)
    {
        printf("cannot swap");
    }
    if (2*k-1 == n)
    {
        printf("cannot swap");
    }
    struct node *x = first;
    struct node *x_prev = NULL;
	
    for (int i = 0; i < k-1; i++)
    {
        x_prev = x;
        x = x->link;
    }
    struct node *y = first;
    struct node *y_prev = NULL;
	
    for (int i = 0; i < n-k; i++)
    {
        y_prev = y;
        y = y->link;
    }
    
    x_prev->link = x;
    y_prev->link = y;

    struct node *temp = (struct node*) malloc(sizeof(struct node));
    
    //swap info
    temp->info = x->info;
    x->info = y->info;
    y->info = temp->info;

    //swapp links
    temp->link = x->link;
    x->link = x_prev->link->link;
    y->link = y_prev->link->link;
}
void main(){
    int k = 2;
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_end(40);
    insert_end(50);

    display();

    swapK(k);
    printf("After Swap: ");
    display();
}