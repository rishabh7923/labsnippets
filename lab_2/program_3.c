/* WAP to swap variables values of i & j without using temporary variables */

#include<stdio.h>

int main() {
    int i, j;

    printf("Enter the value of i & j: ");
    scanf("%d%d", &i, &j);

    printf("\nBefore Swapping I: %d & J: %d", i, j);

    i = i + j;
    j = i - j;
    i = i - j;

    printf("\nAfter Swapping I: %d & J: %d", i, j);

    return 0;
}
