// 44. WAP to implement Priority Queue. (Ascending / Descending) 

#include <stdio.h>
#define N 5
int F=-1;
int R=-1;

struct element
{
    int value;
    int priority;
};
struct element PQ[N];

void enqueue(int x,int y){
    if (R==N-1)
    {
        printf("Overflow\n");
        return;
    }
    R++;
    PQ[R].value =x;
    PQ[R].priority =y;
    if (F==-1)
    {
        F=0;
    }
}

int dequeue(){
    if (F==-1)
    {
        printf("Underflow\n");
        return -1;
    }
    
    if(F==R){
        F=-1;
        R=-1;
        return -1;
    }
    else{
        int max=F;
        for (int i = F+1; i <= R; i++)
        {
            if (PQ[i].priority>PQ[max].priority)
            {
                max=i;
            }
        }
        for (int i = max; i < R; i++)
        {
            PQ[i] = PQ[i+1];
        }
        R--;
        int y= PQ[F].value;
        return y;
    }
}

//DESCENDING
int dequeue_desc(){
    if (F==-1)
    {
        printf("Underflow\n");
        return -1;
    }
    int y;
    if(F==R){
        y=PQ[F].value;
        F=-1;
        R=-1;
        return y;
    }
    else{
        int min=F;
        for (int i = F+1; i <= R; i++)
        {
            if (PQ[min].priority<PQ[i].priority)
            {
                min=i;
            }
        }
        y= PQ[min].value;
        for (int i = min; i < R; i++)
        {
            PQ[i] = PQ[i+1];
        }
        R--;
        return y;
    }
}

void main(){
    enqueue(10,1);
    enqueue(20,2);
    enqueue(30,3);
    enqueue(40,4);
    printf("%d ",dequeue());
    printf("%d",dequeue_desc());
}
