// 35. Write a recursive function to find the sum of digits of a given number. 
#include<stdio.h>

int Sum(int n){
    if(n==0){
    	return 0;
	}
	else
        return n%10 + Sum(n/10);
        
}


void main(){
    int n;
    printf("Enter Num:");
    scanf("%d",&n);

    printf("%d",Sum(n));
}
