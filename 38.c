// 38. Write a recursive function to calculate the sum of all elements in an array. 
#include<stdio.h>

int sum_arr(int arr[],int n){
    if (n==1)
    {
        return arr[0];
    }
    else{
        int sum =0 ;
        sum += arr[n-1]+sum_arr(arr,n-1);
        return sum;
    } 

}

void main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    printf("%d",sum_arr(arr,n));
}