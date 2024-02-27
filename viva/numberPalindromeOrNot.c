/* WAP in C to check if given number is palindrome or not*/
#include <stdio.h>

int main()
{
    int number, temp, reverse = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    printf("Given number (%d) is %s\n", number, (number == reverse ? "palindrome" : "not palindrome"));

    return 0;
}
