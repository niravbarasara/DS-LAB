#include <stdio.h>
#define n 50

int top = -1;
char stack[n]; // FIX 1: Dedicated array for the stack so it doesn't overwrite 'str'

void push(char x){
    if (top >= n - 1) {
        printf("Stack is Overflow\n");
    } else {
        stack[++top] = x; // Using stack array
    }
}

char pop(){
    if (top == -1) {
        // Return a dummy char to handle underflow cleanly during comparison
        return '\0'; 
    } else {
        return stack[top--]; // Using stack array
    }
}

char display(){
    printf("\n");
    for (int i = top; i >= 0; i--) {
        printf("%c ", stack[i]);
    }
    printf("\n");
}

void main(){
    char str[n]; // FIX 1: Dedicated local array for the user input string
    printf("Enter String: ");
    scanf("%s", str);
    
    int i = 0;
    
    // Safety check: If the string doesn't contain 'c' at all, handle it cleanly
    while (str[i] != 'c' && str[i] != '\0') {
        push(str[i]);
        i++;
    }
    
    // If we reached the end of the string without finding 'c'
    if (str[i] == '\0') {
        printf("INVALID...\n");
        return;
    }
    
    i++; // Move past 'c' to start checking the second half
    
    int flag = 1; // FIX 2: Use a flag variable to monitor the tracking state
    
    while (str[i] != '\0') {
        if (pop() != str[i]) {
            flag = 0; // Mismatch or underflow detected
            break;    // Stop completely on the first error
        }   
        i++; // FIX 3: Increments correctly to inspect every single trailing character
    }   
    
    // FIX 4: Ensure the stack is completely empty to verify balanced length
    if (flag == 1 && top == -1) {
        printf("VALID...\n");
    } else {
        printf("INVALID...\n");
    }
}
