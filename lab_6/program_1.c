/* WAP to print this series. 1^2 + 2^3 + 3^4...*/
#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++) {
        sum += pow(i, i + 1);
        printf("%d^%d + ", i, i + 1);
    }

    printf("\b\b= %d", sum);

    return 0;
}
