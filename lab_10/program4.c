/**
 * Create a file as NUM and store any 2 integers in this file.
 * Now create two more files named as EVEN and ODD here we will
 * be storing the even and odd numbers from the NUM file and display
 * the contents of these files.
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fileNum, *fileOdd, *fileEven;
    int i, number;

    /* Open NUM to take numbers and save them*/
    fileNum = fopen("NUM", "w");
    if (fileNum == NULL) {
        printf("Failed to open file for some reason");
        exit(1);
    }

    for(i = 0; i < 2;i++) {
        printf("Enter integer (%d): ", i + 1);
        scanf("%d", &number);
        putw(number, fileNum);
    }

    fclose(fileNum);

    /* open num in read and others in write mode  */
    fileNum = fopen("NUM", "r");
    fileEven = fopen("EVEN", "w");
    fileOdd = fopen("ODD", "w");

    if (fileNum == NULL || fileEven == NULL || fileOdd == NULL) {
        printf("Failed to open files for some reason");
        exit(1);
    }

    while ((number = getw(fileNum)) != EOF)
        putw(number, number % 2 == 0 ? fileEven : fileOdd);

    fclose(fileNum);
    fclose(fileEven);
    fclose(fileOdd);

    /* open all files in read to display content */
    fileEven = fopen("EVEN", "r");
    fileOdd = fopen("ODD", "r");

    printf("\nContent of EVEN file: \n");
    while ((number = getw(fileEven)) != EOF) printf("%d ", number);

    printf("\n\nContent of ODD file: \n");
    while ((number = getw(fileOdd)) != EOF) printf("%d ", number);

    fclose(fileEven);
    fclose(fileOdd);

    return 0;
}
