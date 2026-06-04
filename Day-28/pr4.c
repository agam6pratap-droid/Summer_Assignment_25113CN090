#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i, found;
    char searchName[50];

    do {
        printf(" CONTACT MANAGEMENT SYSTEM \n");
        printf("1.Add Contact\n");
        printf("2.Display Contacts\n");
        printf("3.Search Contact\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Name: ");
                scanf("%s", contacts[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contacts[n].phone);

                n++;
                printf("Contact added successfully.\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No contacts found.\n");
                } else {
                    printf("\nName\t\tPhone Number\n");
                    for(i = 0; i < n; i++) {
                        printf("%s\t\t%s\n",
                               contacts[i].name,
                               contacts[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter Name to search: ");
                scanf("%s", searchName);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        printf("\nContact Found:\n");
                        printf("Name  : %s\n", contacts[i].name);
                        printf("Phone : %s\n", contacts[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Contact not found.\n");
                }
                break;

            case 4:
                printf("Exiting Contact Management System...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}