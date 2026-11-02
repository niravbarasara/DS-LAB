// 69. Music Player Simulation
// WAP to simulate music player application using suitable data structure. There is
// no estimation about number of music files to be managed by the music player.
// Your program should support all the basic music player operations to play and
// manage the playlist.

#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *lptr;
	char song[50];
	struct node *rptr;
};

struct node* first = NULL;
struct node* rear = NULL;

void ins(char x){
	struct node *new;
	new=(struct node*) malloc(sizeof(struct node));
    new->song = x;
	
	if(rear == NULL){
		new->lptr = NULL;
		new->rptr = front;
		
	}
}
