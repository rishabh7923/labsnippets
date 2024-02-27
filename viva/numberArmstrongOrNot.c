/* WAP in C to check whether the given number is Armstrong or not */

#include<stdio.h>
#include<math.h>

int main() {
    int number, digits=0, temp, cubic_sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    temp = number;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;

    while(temp > 0) {
        cubic_sum += pow(temp % 10, digits);
        temp /= 10;
    }

    printf("Given number (%d) is %s\n", number, number == cubic_sum ? "armstrong" : "not armstrong");

    return 0;
}
