    /* 
     * Q106: Write a program to Create employee management system.
     */

#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    char department[50];
};

int main() {

    struct Employee employees[50]; 
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        
        while (getchar() != '\n');

        printf("Name: ");
        scanf("%s", employees[i].name);
        
        printf("Department: ");
        scanf("%s", employees[i].department);
    }

    printf("\n===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====\n");
    printf("%-10s %-20s %-15s\n", "Emp ID", "Name", "Department");
    printf("---------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-15s\n", employees[i].empId, employees[i].name, employees[i].department);
    }

    return 0;
}

/* Output looks like:
prachi@192 Day27 % cd "/Users/prachi/Desktop/Code/Day27/" && gcc q106.c -o q106 && "/Users/prachi/Desktop/Code/Day27/"q106
Enter the number of employees: 2

Enter details for Employee 1:
Employee ID: 23
Name: prachi
Department: software

Enter details for Employee 2:
Employee ID: 34
Name: neha
Department: testing

===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====
Emp ID     Name                 Department     
---------------------------------------------------
23         prachi               software       
34         neha                 testing        
prachi@192 Day27 % */