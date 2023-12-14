/* WAP to print this series. 1^2 + 2^3 + 3^4...*/
#include<stdio.h>
#include<math.h>

int main() {
    int terms, result = 0, i;

    printf("\nEnter the number of terms: ");
    scanf("%d", &terms);

    for(i = 1;i<=3;i++)
        result += pow(i, i+1); 

    printf("Result: %d\n", result);

    return 0;
}
