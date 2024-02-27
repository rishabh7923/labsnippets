/* WAP to sort the numbers using bubble sort. */

#include<stdio.h>

int main() {
    int arr[100], i, j, size;
    
    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(i = 0; i < size;i++) scanf("%d", &arr[i]);

    for(i = 0; i < size - 1;i++) {
        for(j = 0; j < size - 1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted Array: ");
    for(i = 0; i < size;i++) printf("%d ", arr[i]);

    return 0;
}
