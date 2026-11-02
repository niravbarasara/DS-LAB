#include <stdio.h>

int sumOfSquares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

void main() {
    int n, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 1 && n != 4) {
        n = sumOfSquares(n);
    }

    if (n == 1)
        printf("%d is a Happy Number", original);
    else
        printf("%d is NOT a Happy Number", original);

}