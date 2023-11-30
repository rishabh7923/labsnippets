/* WAP to swap variables values of i & j using temporary variables */

#include<stdio.h>

int main() {
    int i, j, temp;

    printf("Enter the value of i & j: ");
    scanf("%d%d", &i, &j);

    printf("\nBefore Swapping I: %d & J: %d", i, j);

    temp = i;
    i = j;
    j = temp;

    printf("\nAfter Swapping I: %d & J: %d", i, j);

    return 0;
}
