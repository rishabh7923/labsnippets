/*

Q. Write a menu driven program in C with following options
    A. Find greater between 2 numbers
    B. Check, number is even or odd
    C. Calculate the area of circle
    D. exit

*/

#include <stdio.h>

int main()
{
    char action;
    int n1, n2, number;
    float radius;

    printf("Which action would you like to perform:\n");
    printf("\n\tA. Find greater number between 2");
    printf("\n\tB. Check, number is even or odd");
    printf("\n\tC. Calculate the area of circle");
    printf("\n\tD. Exit\n");

    scanf("%c", &action);

    switch (action)
    {
    case 'A':
    case 'a':
        printf("\nEnter two numbers: ");
        scanf("%d%d", &n1, &n2);

        printf("Greatest Number: %d", n1 > n2 ? n1 : n2);
        break;
    case 'B':
    case 'b':
        printf("\nEnter the number: ");
        scanf("%d", &number);

        if (number % 2 == 0) printf("Given number (%d) is even", number);
        else printf("Given number (%d) is odd", number);
        break;
    case 'C':
    case 'c':
        printf("\nEnter the radius of circle: ");
        scanf("%f", &radius);

        printf("Area of circle: %f", 3.14 * (radius * radius));
        break;
    case 'D':
    case 'd':
        printf("\nExiting the program...");
        break;
    default:
        printf("\nInvalid Input..exiting program");
        break;
    }

    return 0;
}
