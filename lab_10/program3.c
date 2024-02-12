/**
 * WAP in C create a file a.txt store the data in it and copy the contents into b.txt.
 */

#include<stdio.h>
#include<stdlib.h>
#define MAX_CONTENT_SIZE 1000

int main() {
    char content[MAX_CONTENT_SIZE], c;
    FILE *file1, *file2;

    file1 = fopen("a.txt", "w");
    
    if (file1 == NULL) {
        printf("Failed to create or open a.txt");
        exit(0);
    }

    printf("Enter content to store in file a.txt: \n");
    fgets(content, sizeof(content), stdin);
    fputs(content, file1);
    fclose(file1);

    file1 = fopen("a.txt", "r");
    file2 = fopen("b.txt", "w");

    if(file1 == NULL || file2 == NULL) {
        printf("\nFailed to open file for some reason.");
        exit(0);
    }

    while ((c = fgetc(file1)) != EOF)
        fputc(c, file2);

    printf("\nContent copied from a.txt to b.txt");

    fclose(file1);
    fclose(file2);

    return 0;
}
