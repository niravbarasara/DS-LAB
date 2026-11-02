// 60. WAP to perform given operation in the linked list. There exist a Linked List. Add
// a node that contains the GCD of those two nodes between every pair adjacent
// node of Linked List.

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

int GCD(int a, int b){
    if (b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}

void node_gcd(){
    if (first == NULL)
    {
        printf("Linked List is empty");
    }
    struct node *save = first;
    struct node *prev = NULL;

    while (save != NULL && save->link != NULL)
    {
        int gcd = GCD(save->info , save->link->info);
        struct node *gcd_node = (struct node *)malloc(sizeof(struct node));

        gcd_node->info = gcd;
        
        prev =save;
        save = save->link;

        gcd_node->link = save;
        prev->link = gcd_node;


    }
    
}
void main(){
    insert_end(18);
    insert_end(6);
    insert_end(10);
    insert_end(3);
    display();

    node_gcd();
    printf("After Gcd: ");

    display();
}