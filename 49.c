// 49. WAP to sort the array elements using Pointer. 
#include<stdio.h>

void main(){
    
    int n,*p;
    printf("Enter num of elements in array: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p+i);
    }
    
    
    for (int i = 0; i < n-1; i++)
    {
    
        for (int j = i+1; j < n; j++)
        {
            if (*(p+i)<*(p+j))
            {
            int temp = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = temp;
            }     
    }
}
    printf("Sorted Array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(p+i));
    }
        
}