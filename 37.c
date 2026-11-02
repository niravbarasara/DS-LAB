//37. Write a recursive function to find the largest element in a given array. 
#include<stdio.h>

int largest(int arr[],int n){
    if (n==1)
    {
        return arr[0];
    }
    int max = largest(arr,n-1);
    if (max<arr[n-1])
    {
        return arr[n-1];
    }
    return max;
}

void main(){
    int n=0;
    int arr[n];
    printf("Enter size of array:");
    scanf("%d",&n);
    
    printf("Enter Array:");
    for (int i = 0; i <= n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("%d",largest(arr,n));
}
