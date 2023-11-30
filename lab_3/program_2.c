/* WAP to find greatest among three numbers using nested if */

#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) printf("\nA (%d) is greatest number", a);
        else printf("\nC (%d) is greatest number", c);
    } else {
        if (b >= c) printf("\nB (%d) is greatest number", b);
        else printf("\nC (%d) is greatest number", c);
    }

    return 0;
}
