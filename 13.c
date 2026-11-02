//WAP to merge two arrays   
#include <stdio.h>

void main() {
    
    int n1, n2, i, j, k;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2], merged[n1+n2];

    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    k = 0;

    // copy first array into merged
    for (i = 0; i < n1; i++)
        merged[k++] = arr1[i];

    // copy second array into merged
    for (j = 0; j < n2; j++)
        merged[k++] = arr2[j];

    printf("Merged array: ");
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);

    
}

