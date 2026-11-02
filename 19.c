#include <stdio.h>

int main() {
    int rows = 5; // Number of rows to print
    int i, j, space, coef = 1;

    for (i = 0; i < rows; i++) {
        // Step 1: Print leading spaces for pyramid alignment
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Step 2: Calculate and print coefficients for the row
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1; // First element of any row is always 1
            } else {
                coef = coef * (i - j + 1) / j; // Binomial coefficient formula
            }
            printf("%4d", coef);
        }
        
        printf("\n"); // Move to the next row
    }

    return 0;
}
