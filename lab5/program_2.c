#include<stdio.h>
#include<math.h>

/* Variation (1): Using brute force */

int main() {
    int isPrime = 1, number;
    int i;

    printf("\nEnter the number: ");
    scanf("%d", &number);

    if (number < 2) isPrime = 0;
    else {
        for (i = 2; i < number; i++) {
            if(number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime) printf("\nGiven number is a prime number");
    else printf("\nGiven number is not a prime number");

    return 0;
}

/* Variation (2): Using N/2*/

int main() {
    int isPrime = 1, number;
    int i;

    printf("\nEnter the number: ");
    scanf("%d", &number);

    if(number < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i < number/2; i++) {
            if(number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if(isPrime) printf("\nGiven number is a prime number");
    else printf("\nGiven number is not a prime number");
    
    return 0;
}

/* Variation (3): Using square root (Most efficient) */

int main() {
    int isPrime = 1, number;
    int i;

    printf("\nEnter the number: ");
    scanf("%d", &number);

    if (number < 2) isPrime = 0;
    else {
        for(i = 2; i < ceil(sqrt(number)); i++) {
            if (number % i == 0) { isPrime = 0; break; } 
        }
    }

    if(isPrime) printf("\nGiven number is a prime number");
    else printf("\nGiven number is not a prime number");
    
    return 0;
}
