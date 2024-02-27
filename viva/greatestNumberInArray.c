/* WAP in C to find the greatest number in an array */

#include <stdio.h>

int main()
{
    int arr[100], n, i, greatest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter (%d) element: ", i+1);
        scanf("%d", &arr[i]);
    }

    //Take initial value for reference (comparing)
    greatest = arr[0];

    // Iterate through the array to find the greatest element
    for (i = 1; i < n; i++)
        if (arr[i] > greatest)
            greatest = arr[i];
    
    printf("\nreatest number in the array is: %d\n", greatest);

    return 0;
}
