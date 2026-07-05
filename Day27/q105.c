 /* 
     * Q105: Write a program to Create student record management system.
     */

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float gpa;
};

int main() {
   
    struct Student students[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    printf("\n===== STUDENT RECORDS SYSTEM BY PRACHI =====\n");
    printf("%-10s %-20s %-5s\n", "Roll No", "Name", "GPA");
    printf("-----------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-5.2f\n", students[i].rollNo, students[i].name, students[i].gpa);
    }

    return 0;
}

/* Output  look like this:

Enter details for Student 1:
Roll Number: 433
Name: prachi
GPA: 8 

Enter details for Student 2:
Roll Number: 23
Name: shreya 
GPA: 7.8

Enter details for Student 3:
Roll Number: 344
Name: richa
GPA: 7.6

===== STUDENT RECORDS SYSTEM BY PRACHI =====
Roll No    Name                 GPA  
-----------------------------------
433        prachi               8.00 
23         shreya               7.80 
344        richa                7.60 
prachi@192 Day27 % */