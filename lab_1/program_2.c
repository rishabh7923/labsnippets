//WAP in C to convert temperature in Celsius to Fahrenheit.

#include<stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("\nEnter temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 35;

    printf("Temperature in Fahrenheit is: %f", fahrenheit);

    return 0;
}
