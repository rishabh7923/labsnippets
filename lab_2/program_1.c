/* WAP to calculate the energy by equation:
Energy = [mass X acceleration X height + massXvelocity^2/2] */

#include<stdio.h>

int main() {
    float mass, acceleration, height, velocity, energy;

    printf("Enter the value of mass: ");
    scanf("%f", &mass);

    printf("Enter the value of acceleration: ");
    scanf("%f", &acceleration);

    printf("Enter the value of height: ");
    scanf("%f", &height);

    printf("Enter the value of velocity: ");
    scanf("%f", &velocity);

    energy = mass * acceleration * height + mass * (velocity * velocity) / 2;

    printf("\nEnergy: %f", energy);

    return 0;
}
