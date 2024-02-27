/* WAP to sort names ( bubble sort ) */

#include<stdio.h>
#include<string.h>

int main() {
    char names[][50] = {
        "Rachel",
        "Olivia",
        "Bob",
        "Nathan",
        "Isabel",
        "Emily",
        "Jack"
    };

    int i, j, size = sizeof(names)/(sizeof(names[0]) / sizeof(char));

    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++) 
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }

    for(i  = 0; i < size;i++) printf("%s\n", names[i]);

    return 0;
}
