// 29 A 90. WAP to implement Quick Sort using Array.

#include <stdio.h>

void quick_sort(int arr[],int lb,int ub){
    int flag =1;
    int i,j,key,temp;

    if (lb<ub)
    {
        i=lb;
        j=ub+1;
        key=arr[lb];
        while (flag)
        {
            i++;
            while (arr[i]<key)
            {
                i++;
            }
            j--;
            while (arr[j]>key)
            {
                j--;
            }
            if (i<j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }else{
                flag =0;
            }
            
        }
        temp = arr[lb];
        arr[lb] = arr[j];
        arr[j] = temp;
        quick_sort(arr,lb,j-1);
        quick_sort(arr,j+1,ub);

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
    
    quick_sort(arr,0,n-1);
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}