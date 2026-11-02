//WAP to check whether two numbers are co-prime or not.

#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    if (x == 1)
        printf("%d and %d are co-prime", a, b);
    else
        printf("%d and %d are NOT co-prime", a, b);
}