/*
 * Q119: Mini Employee Management System
 */

#include <stdio.h>

int main() {

    int id[100];
    char name[100][50];
    float salary[100];

    int total=0,choice,i,search;

    while(1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Employee ID: ");
                scanf("%d",&id[total]);

                printf("Employee Name: ");
                scanf(" %[^\n]",name[total]);

                printf("Salary: ");
                scanf("%f",&salary[total]);

                total++;

                printf("Employee Added Successfully.\n");
                break;

            case 2:

                printf("\nID\tName\t\tSalary\n");

                for(i=0;i<total;i++)
                    printf("%d\t%-15s%.2f\n",id[i],name[i],salary[i]);

                break;

            case 3:

                printf("Enter Employee ID: ");
                scanf("%d",&search);

                for(i=0;i<total;i++)
                {
                    if(id[i]==search)
                    {
                        printf("\nEmployee Found\n");
                        printf("Name : %s\n",name[i]);
                        printf("Salary : %.2f\n",salary[i]);
                        break;
                    }
                }

                if(i==total)
                    printf("Employee Not Found.\n");

                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* Output looks like this:
prachi@192 Day30 % cd "/Users/prachi/Desktop/Code/Day30/" && gcc q119.c -o q119 && "/Users/prachi/Desktop/Code/Day30/"q119

===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter Choice: 1
Employee ID: 23
Employee Name: Raj
Salary: 40000
Employee Added Successfully.

===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter Choice: 1
Employee ID: 24
Employee Name: Prachi
Salary: 56000
Employee Added Successfully.

===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter Choice: 1
Employee ID: 56
Employee Name: Neha
Salary: 47000
Employee Added Successfully.

===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter Choice: 2

ID      Name            Salary
23      Raj            40000.00
24      Prachi         56000.00
56      Neha           47000.00

===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter Choice: 3
Enter Employee ID: 56

Employee Found
Name : Neha
Salary : 47000.00

===== EMPLOYEE MANAGEMENT SYSTEM BY PRACHI =====
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter Choice: 4
prachi@192 Day30 %  */