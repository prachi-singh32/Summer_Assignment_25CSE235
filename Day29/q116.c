/*
 * Q116: Write a program to Create inventory management system.
 */

#include <stdio.h>

int main() {

    int id[100];
    int quantity[100];
    float price[100];

    int total = 0;
    int choice, i, searchId;

    while (1) {

        printf("\n===== INVENTORY MANAGEMENT SYSTEM BY PRACHI =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:

                printf("Enter Product ID: ");
                scanf("%d", &id[total]);

                printf("Enter Quantity: ");
                scanf("%d", &quantity[total]);

                printf("Enter Price: ");
                scanf("%f", &price[total]);

                total++;

                printf("Product Added Successfully.\n");
                break;

            case 2:

                if (total == 0) {
                    printf("No products available.\n");
                } else {

                    printf("\nID\tQuantity\tPrice\n");

                    for (i = 0; i < total; i++) {
                        printf("%d\t%d\t\t%.2f\n",
                               id[i], quantity[i], price[i]);
                    }
                }

                break;

            case 3:

                printf("Enter Product ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < total; i++) {

                    if (id[i] == searchId) {

                        printf("\nProduct Found\n");
                        printf("ID: %d\n", id[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        printf("Price: %.2f\n", price[i]);

                        break;
                    }
                }

                if (i == total)
                    printf("Product Not Found.\n");

                break;

            case 4:

                printf("Exiting...\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

/* Output look like this:
prachi@192 Day29 % cd "/Users/prachi/Desktop/Code/Day29/" && gcc q116.c -o q116 && "/Users/prachi/Desktop/Code/Day29/"q116

===== INVENTORY MANAGEMENT SYSTEM BY PRACHI =====
1. Add Product
2. Display Products
3. Search Product
4. Exit
Enter your choice: 1
Enter Product ID: 343
Enter Quantity: 22
Enter Price: 400
Product Added Successfully.

===== INVENTORY MANAGEMENT SYSTEM BY PRACHI =====
1. Add Product
2. Display Products
3. Search Product
4. Exit
Enter your choice: 2

ID      Quantity        Price
343     22              400.00

===== INVENTORY MANAGEMENT SYSTEM BY PRACHI =====
1. Add Product
2. Display Products
3. Search Product
4. Exit
Enter your choice: 3
Enter Product ID to Search: 343

Product Found
ID: 343
Quantity: 22
Price: 400.00

===== INVENTORY MANAGEMENT SYSTEM BY PRACHI =====
1. Add Product
2. Display Products
3. Search Product
4. Exit
Enter your choice: 4
Exiting...
prachi@192 Day29 % 
*/