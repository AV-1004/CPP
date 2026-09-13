#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n1. Say Hello\n2. Say Bye\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Hello!\n"); break;
            case 2: printf("Bye!\n"); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 3);

    return 0;
}