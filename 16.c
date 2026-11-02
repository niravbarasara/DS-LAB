// WAP to insert a number in an array that is already sorted in an ascending order.

#include<stdio.h>

void main() {
    
    int n,temp;
    int x;
      
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d",&x);
    n++;
    arr[n]= x;

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
    printf("\nArray after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

