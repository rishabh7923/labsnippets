/* WAP in C to check whether the given number is prime or not.*/
#include<stdio.h>

int main() {
    int number, i;

    printf("Enter the number: ");
    scanf("%d", &number);

    int isPrime = number > 1 ? 1 : 0;

    for(i = 2; i < number/2 && isPrime;i++)
        if(number % i == 0) isPrime = 0;

    printf("Given number (%d) is %s", number, isPrime ? "prime" : "not prime");

    return 0;
}
