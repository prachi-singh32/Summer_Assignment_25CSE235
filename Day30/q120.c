/*
 * Q120: Develop complete mini project using arrays, strings and functions.
 */

#include <stdio.h>

#define MAX 100

int roll[MAX], marks[MAX];
char name[MAX][50];
int total = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateMarks();
void deleteStudent();

int main() {

    int choice;

    while (1) {

        printf("\n=====================================\n");
        printf("   STUDENT MANAGEMENT SYSTEM BY PRACHI\n");
        printf("=====================================\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("\nThank you!\n");
                printf("Mini Project Completed Successfully.\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

void addStudent() {

    if (total == MAX) {
        printf("Database Full!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[total]);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name[total]);

    printf("Enter Marks: ");
    scanf("%d", &marks[total]);

    total++;

    printf("Student Added Successfully.\n");
}

void displayStudents() {

    int i;

    if (total == 0) {
        printf("No Records Found.\n");
        return;
    }

    printf("\n---------------------------------------------\n");
    printf("Roll\tName\t\t\tMarks\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < total; i++) {
        printf("%d\t%-20s%d\n", roll[i], name[i], marks[i]);
    }
}

void searchStudent() {

    int i, searchRoll;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < total; i++) {

        if (roll[i] == searchRoll) {

            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found.\n");
}

void updateMarks() {

    int i, searchRoll;

    printf("Enter Roll Number: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < total; i++) {

        if (roll[i] == searchRoll) {

            printf("Current Marks: %d\n", marks[i]);
            printf("Enter New Marks: ");
            scanf("%d", &marks[i]);

            printf("Marks Updated Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}

void deleteStudent() {

    int i, j, searchRoll;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < total; i++) {

        if (roll[i] == searchRoll) {

            for (j = i; j < total - 1; j++) {

                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];

                int k = 0;
                while (name[j + 1][k] != '\0') {
                    name[j][k] = name[j + 1][k];
                    k++;
                }
                name[j][k] = '\0';
            }

            total--;

            printf("Student Deleted Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}

/* Output looks like this:
prachi@192 Day30 % cd "/Users/prachi/Desktop/Code/Day30/" && gcc q120.c -o q120 && "/Users/prachi/Desktop/Code/Day30/"q120

=====================================
   STUDENT MANAGEMENT SYSTEM BY PRACHI
=====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Marks
5. Delete Student
6. Exit
Enter your choice: 1

Enter Roll Number: 23
Enter Student Name: prachi
Enter Marks: 92
Student Added Successfully.

=====================================
   STUDENT MANAGEMENT SYSTEM BY PRACHI
=====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Marks
5. Delete Student
6. Exit
Enter your choice: 1

Enter Roll Number: 54
Enter Student Name: Neha
Enter Marks: 88
Student Added Successfully.

=====================================
   STUDENT MANAGEMENT SYSTEM BY PRACHI
=====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Marks
5. Delete Student
6. Exit
Enter your choice: 2

---------------------------------------------
Roll    Name                    Marks
---------------------------------------------
23      prachi              92
54      Neha                88

=====================================
   STUDENT MANAGEMENT SYSTEM BY PRACHI
=====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Marks
5. Delete Student
6. Exit
Enter your choice: 3
Enter Roll Number to Search: 54

Student Found
Roll Number : 54
Name        : Neha
Marks       : 88

=====================================
   STUDENT MANAGEMENT SYSTEM BY PRACHI
=====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Marks
5. Delete Student
6. Exit
Enter your choice: 4
Enter Roll Number: 23
Current Marks: 92
Enter New Marks: 90
Marks Updated Successfully.

=====================================
   STUDENT MANAGEMENT SYSTEM BY PRACHI
=====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Marks
5. Delete Student
6. Exit
Enter your choice: 2

---------------------------------------------
Roll    Name                    Marks
---------------------------------------------
23      prachi              90
54      Neha                88

=====================================
   STUDENT MANAGEMENT SYSTEM BY PRACHI
=====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Marks
5. Delete Student
6. Exit
Enter your choice: 6

Thank you!
Mini Project Completed Successfully.
prachi@192 Day30 % */