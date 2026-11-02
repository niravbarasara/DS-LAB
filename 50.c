// 50. WAP to check whether the string is Palindrome or not using Pointer. 
#include <stdio.h>


void ispalindrome(char *ele,int size){
    int *temp = ele;
    int t;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; i < size; i++)
        {
            if (i<j)
            {
                t = *(temp+i);
                *(temp+i) = *(temp+j);
                *(temp+j) = t;    
            } 
            
        }
        
    }
    if (*temp == *ele)
    {
        printf("PALINDROME");
    }
    else
        printf("NOT PALINDROME");
    
}
void main(){
    char str[]="php";
    ispalindrome(str,3);

}