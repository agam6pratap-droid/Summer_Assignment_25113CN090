#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee s[100];
    int n = 0, choice, id, i, found;

    do {
        printf("\n===== EMPLOYEE RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &s[n].id);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Salary: ");
                scanf("%f", &s[n].salary);

                n++;
                printf("Employee record added successfully.\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nID\tName\tSalary\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\n",
                               s[i].id,
                               s[i].name,
                               s[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(s[i].id == id) {
                        printf("\nEmployee Found:\n");
                        printf("ID: %d\n", s[i].id);
                        printf("Name: %s\n", s[i].name);
                        printf("Salary: %.2f\n", s[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Employee not found.\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}