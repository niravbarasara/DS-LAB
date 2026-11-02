#include <stdio.h>

void bubble_sort(int arr[],int n){
    int last = n-1;
    int exchs;
    for (int i = 0; i <= n-2; i++)
    {
        exchs =0;
        for (int j = 0; j <= last-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                exchs++;
            }
        }
        if (exchs == 0)
        {
            printf("Array is sorted");
            return;
        }
        else{
            last--;
        }
    }
    return;
    

}
void main(){
    int n;
    printf("Enter num of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
   
}