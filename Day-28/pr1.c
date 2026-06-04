#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int n = 0, choice, i, searchId, found;

    do {
        printf("LIBRARY MANAGEMENT SYSTEM \n");
        printf("1.Add Book\n");
        printf("2.Display Books\n");
        printf("3.Search Book\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[n].id);

                printf("Enter Book Title: ");
                scanf("%s", books[n].title);

                printf("Enter Author Name: ");
                scanf("%s", books[n].author);

                n++;
                printf("Book added successfully.\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nID\tTitle\t\tAuthor\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%s\n",
                               books[i].id,
                               books[i].title,
                               books[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(books[i].id == searchId) {
                        printf("\nBook Found:\n");
                        printf("ID     : %d\n", books[i].id);
                        printf("Title  : %s\n", books[i].title);
                        printf("Author : %s\n", books[i].author);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Book not found.\n");
                }
                break;

            case 4:
                printf("Exiting Library Management System.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}