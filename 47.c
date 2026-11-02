// 47. WAP to calculate the sum of n numbers using Pointer. 

#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*temp,sum;
    printf("Enter n:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        temp = (int *)malloc(sizeof(int));
        printf("Enter Nums:");
        scanf("%d",temp);
        sum += *temp;
    }
    printf("%d",sum);   
}