/* WAP to find roots of quadratic equation */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter the value of a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d < 0) printf("Roots are imaginary");

    root1 = d > 0 ? (-b - sqrt(d) / (2 * a)) : (-b / 2 * a);
    root2 = d > 0 ? (-b + sqrt(d) / (2 * a)) : (-b / 2 * a);

    printf("\nRoot(1): %f\nRoot(2): %f", root1, root2);

    return 0;
}
