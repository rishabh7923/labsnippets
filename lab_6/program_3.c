/**
 * Find the sum of series:
 * Sum = x + x^2/2! + x^4/4! + x^6/6!....
*/

#include<stdio.h>
#include<math.h>

int main() {
    int terms, x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    double sum = x;

    printf("%d + ", x);

    for(int i = 2; i <= (terms-1) * 2 ; i += 2) {
        int fact = 1;
        for(int j = 1;j<=i;j++) fact *= j;

        sum += pow(x, i) / fact;
        printf("%d^%d/%d! + ", x, i, i);
    }

    printf("\b\b= %.2f", sum);

    return 0;
}

