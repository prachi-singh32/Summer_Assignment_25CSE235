    /* 
     * Q111: Write a program to Create ticket booking system.
     */

#include <stdio.h>

struct Ticket {
    int ticketId;
    char passengerName[50];
    char destination[50];
};

int main() {

    struct Ticket bookings[100];
    int n, i;

    printf("Enter number of tickets to book: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Ticket %d:\n", i + 1);
        
        printf("Ticket ID: ");
        scanf("%d", &bookings[i].ticketId);
        while (getchar() != '\n'); 

        printf("Passenger Name: ");
        scanf("%s", bookings[i].passengerName);

        printf("Destination: ");
        scanf("%s", bookings[i].destination);
    }

    printf("\n===== PASSENGER TICKET SYSTEM BY PRACHI =====\n");
    printf("%-12s %-25s %-25s\n", "Ticket ID", "Passenger Name", "Destination");
    printf("----------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-12d %-25s %-25s\n", bookings[i].ticketId, bookings[i].passengerName, bookings[i].destination);
    }

    return 0;
}

/* Output look like this:
prachi@192 Day28 % cd "/Users/prachi/Desktop/Code/Day28/" && gcc q111.c -o q111 && "/Users/prachi/Desktop/Code/Day28/"q111
Enter number of tickets to book: 3

Enter details for Ticket 1:
Ticket ID: 3442
Passenger Name: prachi
Destination: mathura

Enter details for Ticket 2:
Ticket ID: 675
Passenger Name: neha
Destination: Delhi

Enter details for Ticket 3:
Ticket ID: 5432
Passenger Name: Richa
Destination: Patna

===== PASSENGER TICKET SYSTEM BY PRACHI =====
Ticket ID    Passenger Name            Destination              
----------------------------------------------------------------
3442         prachi                    mathura                  
675          neha                      Delhi                    
5432         Richa                     Patna                    
prachi@192 Day28 % */