//WAP to calculate simple interest

#include<stdio.h>

int main() {
    float p, r, t;

    printf("\nEnter the value of principle, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest: %f", (p * r * t)/100);

    return 0;
}
