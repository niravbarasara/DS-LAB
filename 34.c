// 34. Write a recursive function to generate the nth Fibonacci number. 

#include<stdio.h>
int fibo(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
        return fibo(n-1) + fibo(n-2);
}

void main(){
    int n;
    printf("Enter num:");
    scanf("%d",&n);

    printf("%d",fibo(n));
}