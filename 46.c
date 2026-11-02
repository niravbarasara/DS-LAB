// 46. WAP to get and print the array elements using Pointer. 

#include<stdio.h>

void main(){
    int *p,n;
    printf("Enter num of elements in array: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p+i);
    }
    
    printf("Elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(p+i));
    }
    

}