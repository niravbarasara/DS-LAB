//36. Write a recursive function to reverse a given number. 
#include <stdio.h>


int rev(int n,int re){
	if(n==0){
		return re;
	}
	else 
		return rev(n/10,re*10+n%10);
}

void main(){
	int n;
	printf("Enter num:");
	scanf("%d",&n);
	printf("%d",rev(n,0));
	
}
