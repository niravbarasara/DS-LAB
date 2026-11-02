// 48. WAP to find the largest element in the array using Pointer. 

#include<stdio.h>
void main(){
    int *max,n;
    printf("Enter num of elements in array: ");
    scanf("%d",&n);
    
    int a[n];
    max =a;
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",max+i);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (*max<a[i])
        {
            max=&a[i];
        }        
    }
        printf("%d",*max);
}