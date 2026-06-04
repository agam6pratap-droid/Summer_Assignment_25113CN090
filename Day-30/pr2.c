#include <stdio.h>

int main() {
    int id[100], n = 0, choice, searchId, i, found;
    char title[100][50];

    do {
        printf("   MINI LIBRARY SYSTEM\n");
      
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", title[n]);

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nBook ID\tBook Title\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\n", id[i], title[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        printf("\nBook Found!\n");
                        printf("Book ID: %d\n", id[i]);
                        printf("Book Title: %s\n", title[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Book not found.\n");
                }
                break;

            case 4:
                printf("Thank you for using the Mini Library System!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 4);

    return 0;
}