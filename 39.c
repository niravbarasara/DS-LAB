// 39. Write a recursive function to determine whether a given string is a palindrome. 

#include <stdio.h>

int isPalindrome(char str[],int start,int end){
    if (start>=end)
    {
        return 1;
    }
    if (str[start]!=str[end])
    {
        return 0;
    }
    return isPalindrome(str,start+1,end-1);
}

void main(){
    char str[] = "ABA";
        int res = isPalindrome(str,0,2);
    if(res){
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
}