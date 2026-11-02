#include <stdio.h>

void main()
{
    //a. Demonstration of CodeBlocks of CodeBlocks to write and compile a simple C program ("Hello World").
    printf("Hello World");

    //b. Illustrate the use of scanf and printf function to read and display values of different types of variables, address of a variable in C language.
    int age;
    printf("\nEnter Age:");
    scanf("%d",&age);
    printf("Age: %d\n",age);
    printf("Address of age = %d\n",*&age);
}