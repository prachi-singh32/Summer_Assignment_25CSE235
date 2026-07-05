    /* 
     * Q108: Write a program to Create marksheet generation system.
     */
    
#include <stdio.h>

struct Marksheet {
    int rollNo;
    char name[50];
    float math;
    float science;
    float english;
    float total;
    float percentage;
};

int main() {

    struct Marksheet student;

    printf("===== MARKSHEET GENERATION INPUT =====\n");
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);
    printf("Enter Student Name: ");
    scanf("%s", student.name);
    printf("Enter Math Marks (out of 100): ");
    scanf("%f", &student.math);
    printf("Enter Science Marks (out of 100): ");
    scanf("%f", &student.science);
    printf("Enter English Marks (out of 100): ");
    scanf("%f", &student.english);

    student.total = student.math + student.science + student.english;
    student.percentage = (student.total / 300.0) * 100.0;


    printf("\n============================================\n");
    printf("             OFFICIAL MARKSHEET             \n");
    printf("============================================\n");
    printf("Roll No: %-15d Name: %s\n", student.rollNo, student.name);
    printf("--------------------------------------------\n");
    printf("Subject                 Marks Obtained\n");
    printf("--------------------------------------------\n");
    printf("Mathematics             %.2f / 100\n", student.math);
    printf("Science                 %.2f / 100\n", student.science);
    printf("English                 %.2f / 100\n", student.english);
    printf("--------------------------------------------\n");
    printf("Total Marks:            %.2f / 300\n", student.total);
    printf("Aggregate Percentage:   %.2f%%\n", student.percentage);
    printf("Status:                 %s\n", (student.percentage >= 40.0) ? "PASSED" : "FAILED");
    printf("============================================\n");

    return 0;
}

/*. Output look like this:
prachi@192 Day27 % cd "/Users/prachi/Desktop/Code/Day27/" && gcc q108.c -o q108 && "/Users/prachi/Desktop/Code/Day27/"q108
===== MARKSHEET GENERATION INPUT =====
Enter Roll Number: 42
Enter Student Name: prachi
Enter Math Marks (out of 100): 88
Enter Science Marks (out of 100): 75
Enter English Marks (out of 100): 81

============================================
             OFFICIAL MARKSHEET             
============================================
Roll No: 42              Name: prachi
--------------------------------------------
Subject                 Marks Obtained
--------------------------------------------
Mathematics             88.00 / 100
Science                 75.00 / 100
English                 81.00 / 100
--------------------------------------------
Total Marks:            244.00 / 300
Aggregate Percentage:   81.33%
Status:                 PASSED
============================================
prachi@192 Day27 % 
*/