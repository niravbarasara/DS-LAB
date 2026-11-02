//  27. Merge Intervals Problem 
#include <stdio.h>
#define N 4

struct inter
{
    int start;
    int end;
};
struct inter in[N];

void merge(struct inter interval[]){
    struct inter temp;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-1; j++)
        {
            if (interval[j].start>interval[j+1].start)
            {
               temp=interval[j];
               interval[j]=interval[j+1];
               interval[j+1]=temp;
            }   
        }
    }

    int start = interval[0].start;
    int end = interval[0].end;

    printf("Merged Intervals = {");
    for (int i = 1; i < N; i++)
    {
        if (interval[i].start <= end)
        {
            if (interval[i].end > end)
            {
                end = interval[i].end;
            }
        }
        else
        {
            printf("{%d,%d}, ", start, end);

            start = interval[i].start;
            end = interval[i].end;
        }
    }
    printf("{%d,%d}}", start, end);
    // printf("}\n");
}
int main(){
// Input: Intervals = {{1,3},{2,4},{6,8},{9,10}} 
// Output: {{1, 4}, {6, 8}, {9, 10}} 
    
    printf("Enter Interal \n");
    
    for (int i = 0; i < N; i++)
    {
        printf("START: ");
        scanf("%d",&in[i].start);
        printf("END: ");
        scanf("%d",&in[i].end);
    };
    merge(in);
}