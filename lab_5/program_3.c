/* WAP to check if given number is armstrong or not (nth digits)*/
#include<stdio.h>
#include<math.h>

int main() {
    int number, tens = 0, cadd = 0;

    printf("\nEnter the number: ");
    scanf("%d", &number);

    /* Count the number of digits ( can also use log10 function instead but its not in first year syllabus )*/
    int tnumber = number;
  
    while(tnumber > 0) {
        tens++;
        tnumber /= 10;
    }

    /* Now calculate the armstrong value */
    tnumber = number;

    while(tnumber > 0) {
        cadd += pow(tnumber % 10, tens);
        tnumber /= 10;
    }

    if(number == cadd) printf("\nGiven number is armstrong.");
    else printf("\nGiven number is not armstrong.");

    return 0;
}
