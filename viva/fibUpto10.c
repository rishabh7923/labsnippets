/* WAP in C to print Fibonacci series up to 10 terms. */

#include<stdio.h>

int main() {
    int n1 = 0, n2 = 1, n3, i;

    for(i = 0; i < 10;i++) {
        printf("%d ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
