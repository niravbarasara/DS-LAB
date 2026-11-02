// A 87. WAP to implement Selection Sort using Array.

#include <stdio.h>

void selection_sort(int k[],int n){
    int min_ind,temp,i,j;
    for (i = 0; i <= n-2; i++)
    {
        min_ind = i;
        for (j = i+1; j <= n-1; j++)
        {
            if (k[j]<k[min_ind])
            {
                min_ind = j;
            }
        }
        if (min_ind != i)
        {
            temp = k[i];
            k[i] = k[min_ind];
            k[min_ind] = temp;
        }

    }
}

void main(){
	int n,i;
    printf("Enter num of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
 
}
