/* WAP to check if number is even or odd */

#include<stdio.h>

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number % 2 == 0) printf("\nGiven number (%d) is even", number);
    else printf("\nGiven number (%d) is odd", number);

    return 0;
}
