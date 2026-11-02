// WAP to merge two sorted arrays.
 
#include <stdio.h>

void sort(int arr[]){
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n+1; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    return arr[n];
}
void main() {
    
    
    int n1,n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    sort(arr1);
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2], merged[n1+n2];

    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    sort(arr2);

    int k = 0;

    for (int i = 0; i < n1; i++)
        merged[k++] = arr1[i];


    for (int j = 0; j < n2; j++)
        merged[k++] = arr2[j];

    printf("Merged array: ");22
    sort(merged);
    for (int i = 0; i < k; i++)
        printf("%d ", merged[i]);

    
}

