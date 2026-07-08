/*
 * Q117: Student Record System
 */

#include <stdio.h>
#include <string.h>

int main() {

    int roll[100], marks[100];
    char name[100][50];
    int total = 0, choice, i, search;

    while (1) {

        printf("\n===== STUDENT RECORD SYSTEM BY PRACHI =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d",&roll[total]);

                printf("Enter Name: ");
                scanf(" %[^\n]",name[total]);

                printf("Enter Marks: ");
                scanf("%d",&marks[total]);

                total++;
                printf("Student Added Successfully.\n");
                break;

            case 2:
                printf("\nRoll\tName\t\tMarks\n");

                for(i=0;i<total;i++)
                    printf("%d\t%-15s%d\n",roll[i],name[i],marks[i]);

                break;

            case 3:
                printf("Enter Roll Number: ");
                scanf("%d",&search);

                for(i=0;i<total;i++)
                {
                    if(roll[i]==search)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll : %d\n",roll[i]);
                        printf("Name : %s\n",name[i]);
                        printf("Marks: %d\n",marks[i]);
                        break;
                    }
                }

                if(i==total)
                    printf("Student Not Found.\n");

                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* Output looks like this:
prachi@192 Code % cd "/Users/prachi/Desktop/Code/Day30/" && gcc q117.c -o q117 && "/Users/prachi/Desktop/Code/Day30/"q117

===== STUDENT RECORD SYSTEM BY PRACHI =====
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter choice: 1
Enter Roll Number: 43
Enter Name: RICHA
Enter Marks: 87
Student Added Successfully.

===== STUDENT RECORD SYSTEM BY PRACHI =====
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter choice: 1
Enter Roll Number: 46
Enter Name: PRACHI
Enter Marks: 89
Student Added Successfully.

===== STUDENT RECORD SYSTEM BY PRACHI =====
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter choice: 2

Roll    Name            Marks
43      RICHA          87
46      PRACHI         89

===== STUDENT RECORD SYSTEM BY PRACHI =====
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter choice: 3
Enter Roll Number: 46

Student Found
Roll : 46
Name : PRACHI
Marks: 89
*/