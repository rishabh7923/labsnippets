#include<stdio.h>
#include<math.h>

int main() {
    int terms, i, j;
    float x, sum = 0;

    printf("\nEnter the number of terms: ");
    scanf("%d", &terms);

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for(i = 0;i < terms;i++) {
        float factorial = 1;

        for(j=1;j<=(i * 2);j++) factorial *= j;
        sum += pow(x, pow(2, i)) / factorial;
    }

    printf("\nSum = %.2f", sum);

    return 0;
}
