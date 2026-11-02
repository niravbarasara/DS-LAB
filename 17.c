//  WAP to delete a number from an array that is already sorted in an ascending order.

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

    printf("\nEnter element to delete: ");
    scanf("%d",&x);

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

    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            arr[i]=arr[i+1];
            break;
        }
    }
    n--;

    printf("\nArray after deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

