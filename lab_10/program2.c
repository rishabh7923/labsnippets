/**
 * Create a structure EMP for 100 employees with the members name, department, address and salary.
 * Where the address member is itself a structure with the members house no, street, city, state and pin code.
 * Now print the name, address and salary for the mechanical department.
 */

#include<stdio.h>
#include<string.h>
#define limit 100

struct Address
{
    char house_number[50];
    char street[50];
    char city[50];
    char state[50];
    char pincode[10];
};

struct Employees
{
    char name[50];
    char department[50];
    struct Address address;
    float salary;
};

int main() {
    struct Employees employees[limit];
    int i;

    for (i = 0; i < limit;i++) {
        printf("\nEnter the details of employee number: %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", employees[i].name);

        printf("Enter Department: ");
        scanf("%s", employees[i].department);

        printf("Enter Address:\n");

        printf("\tHouse Number: ");
        scanf("%s", employees[i].address.house_number);

        printf("\tStreet: ");
        scanf("%s", employees[i].address.street);

        printf("\tCity: ");
        scanf("%s", employees[i].address.city);
        
        printf("\tState: ");
        scanf("%s", employees[i].address.state);
        
        printf("\tPincode: ");
        scanf("%s", employees[i].address.pincode);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployees of Mechanical Department:");
    for(i = 0; i < limit;i++) {
        if(strcmp(employees[i].department, "mechanical") == 0) {
            printf(
                "\nName: %s\nAddress: %s, %s, %s, %s, %s",
                employees[i].name,
                employees[i].address.house_number,
                employees[i].address.street,
                employees[i].address.city,
                employees[i].address.state,
                employees[i].address.pincode
            );
        }
    }

    return 0;
}
