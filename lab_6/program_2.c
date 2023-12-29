/* WAP to print this series, S=x+x^3+x^5+x^7...*/

#include<stdio.h>
#include<math.h>

int main() {
    int sum = 0, terms, x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for(int i = 1;i <= 2*terms-1;i+=2) {
        sum += pow(x, i);
        printf("%d^%d + ", x, i);
    }

    printf("\b\b= %d", sum);

    return 0;
}
