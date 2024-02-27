/* WAP to calculate the sum of digits */

#include<stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while(number > 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of Digits: %d\n", sum);
    
    return 0;
}
