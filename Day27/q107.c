    /* 
     * Q107: Write a program to Create salary management system.
     */

#include <stdio.h>

struct SalaryRecord {
    int empId;
    char name[50];
    float baseSalary;
    float allowance;
    float tax;
    float netSalary;
};

int main() {

    struct SalaryRecord staff[100];
    int n, i;

    printf("Enter number of employees for payroll processing: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter salary data for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &staff[i].empId);
        printf("Name: ");
        scanf("%s", staff[i].name);
        printf("Base Salary: $");
        scanf("%f", &staff[i].baseSalary);
        printf("Allowance: $");
        scanf("%f", &staff[i].allowance);
        printf("Tax Deduction: $");
        scanf("%f", &staff[i].tax);

        staff[i].netSalary = (staff[i].baseSalary + staff[i].allowance) - staff[i].tax;
    }

    printf("\n===== MONTHLY PAYROLL MANAGEMENT  BY PRACHI =====\n");
    printf("%-10s %-20s %-12s %-12s %-10s %-12s\n", "ID", "Name", "Base", "Allowance", "Tax", "Net Salary");
    printf("----------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s $%-11.2f $%-11.2f $%-9.2f $%-11.2f\n", 
               staff[i].empId, staff[i].name, staff[i].baseSalary, staff[i].allowance, staff[i].tax, staff[i].netSalary);
    }

    return 0;
}

/* Output look like this:
prachi@192 Day27 % cd "/Users/prachi/Desktop/Code/Day27/" && gcc q107.c -o q107 && "/Users/prachi/Desktop/Code/Day27/"q107
Enter number of employees for payroll processing: 3

Enter salary data for Employee 1:
Employee ID: 22
Name: prachi
Base Salary: $3000
Allowance: $250
Tax Deduction: $300

Enter salary data for Employee 2:
Employee ID: 23
Name: richa
Base Salary: $2500
Allowance: $300
Tax Deduction: $150

Enter salary data for Employee 3:
Employee ID: 44
Name: neha
Base Salary: $3200
Allowance: $250
Tax Deduction: $500

===== MONTHLY PAYROLL MANAGEMENT  BY PRACHI =====
ID         Name                 Base         Allowance    Tax        Net Salary  
----------------------------------------------------------------------------
22         prachi               $3000.00     $250.00      $300.00    $2950.00    
23         richa                $2500.00     $300.00      $150.00    $2650.00    
44         neha                 $3200.00     $250.00      $500.00    $2950.00    
prachi@192 Day27 % */