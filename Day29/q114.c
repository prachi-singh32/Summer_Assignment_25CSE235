/*
 * Q114: Write a program to Create menu-driven array operations system.
 */

#include <stdio.h>

int main() {

    int arr[100];
    int size = 0, choice, i, element, pos;

    while (1) {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting System. Goodbye!\n");
            break;
        }

        switch (choice) {

            case 1:
                printf("Enter number of elements to insert: ");
                scanf("%d", &element);

                if (size + element > 100) {
                    printf("Error: Array capacity exceeded!\n");
                } else {
                    printf("Enter %d elements:\n", element);
                    for (i = 0; i < element; i++) {
                        scanf("%d", &arr[size++]);
                    }
                    printf("Elements added successfully.\n");
                }
                break;

            case 2:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);

                pos = -1;

                for (i = 0; i < size; i++) {
                    if (arr[i] == element) {
                        pos = i;
                        break;
                    }
                }

                if (pos != -1)
                    printf("Element found at index %d.\n", pos);
                else
                    printf("Element not found in the array.\n");

                break;

            case 4:
                if (size == 0) {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter index (0 to %d) to delete: ", size - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= size) {
                    printf("Invalid index!\n");
                } else {
                    for (i = pos; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                    printf("Element deleted successfully.\n");
                }
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

/* Output look like this:
prachi@192 Code % cd "/Users/prachi/Desktop/Code/Day29/" && gcc q114.c -o q114 && "/Users/prachi/Desktop/Code/Day29/"q114

===== ARRAY OPERATIONS MENU =====
1. Insert Elements
2. Display Array
3. Search Element
4. Delete Element
5. Exit
Enter your choice (1-5): 1
Enter number of elements to insert: 3
Enter 3 elements:
10
20
30
Elements added successfully.

===== ARRAY OPERATIONS MENU =====
1. Insert Elements
2. Display Array
3. Search Element
4. Delete Element
5. Exit
Enter your choice (1-5): 2
Array elements: 10 20 30

===== ARRAY OPERATIONS MENU =====
1. Insert Elements
2. Display Array
3. Search Element
4. Delete Element
5. Exit
Enter your choice (1-5): 3
Enter element to search: 20
Element found at index 1.

===== ARRAY OPERATIONS MENU =====
1. Insert Elements
2. Display Array
3. Search Element
4. Delete Element
5. Exit
Enter your choice (1-5): 4
Enter index (0 to 2) to delete: 1
Element deleted successfully.

===== ARRAY OPERATIONS MENU =====
1. Insert Elements
2. Display Array
3. Search Element
4. Delete Element
5. Exit
Enter your choice (1-5): 2
Array elements: 10 30

===== ARRAY OPERATIONS MENU =====
1. Insert Elements
2. Display Array
3. Search Element
4. Delete Element
5. Exit
Enter your choice (1-5): 5
Exiting System. Goodbye!
prachi@192 Day29 % */