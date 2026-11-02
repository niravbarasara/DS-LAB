// 28 A 88. WAP to implement Insertion Sort using Array.
void insertion_sort(int arr[],int n){
    int i=1;
    int key,j;
    while (i<n)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        i++;
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
    insertion_sort(arr,n);
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
 
}