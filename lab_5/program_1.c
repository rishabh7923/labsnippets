/* WAP to print fibonacci series upto n number */
#include<stdio.h>

int main() {
    int first = 0, second = 1, number=5;
    int i;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    for(i = 0; i < number; i++) {
        printf("%d ", first);
        int next = first + second;

        first = second;
        second = next;
    }
    
    return 0;
}
