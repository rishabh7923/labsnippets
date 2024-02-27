/* WAP in C to reverse the number */
#include<stdio.h>

int main() {
    int number, temp, reverse = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    temp = number;

    while(temp > 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    printf("Reverse of number: %d\n", reverse);

    return 0;
}
