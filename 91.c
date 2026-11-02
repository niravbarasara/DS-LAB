
#include <stdio.h>

void sortColors(int nums[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    int temp;

    while (mid <= high) {
        if (nums[mid] == 0) {
            temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;

            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;

            high--;
        }
    }
}

void main() {
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = 6;

    sortColors(nums, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
}