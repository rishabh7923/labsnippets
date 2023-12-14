/* WAP to print this series, S=x+x^3+x^5+x^7...*/

/*
    Breakdown: (x^1+0) + (x^1+2) + (x^1+4) + (x^1+6)
                [0]       [1]       [2]        [3]
                
    Powers are based on position
    (2 * index) + 1
    
    [0] -> (2*0) + 1 => 1
    [1] -> (2*1) + 1 => 3
    [2] -> (2*2) + 1 => 5
    [3] -> (2*3) + 1 => 7
*/

#include<stdio.h>
#include<math.h>


int main() {
    int terms, i;
    float result=0, x;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for(i=0;i<terms;i++)
        result += pow(x, (2*i) + 1);

    printf("S = %.2f", result);

    return 0;
}
