#include <stdio.h>

int main() {
    int empId[100], n = 0, choice, searchId, i, found;
    char empName[100][50];
    float salary[100];

    do {
      
        printf("   EMPLOYEE MANAGEMENT SYSTEM\n");
     
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", empName[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No employee records found.\n");
                } else {
                    
                    printf("ID\tName\t\tSalary\n");
              

                    for(i = 0; i < n; i++) {
                        printf("%d\t%-15s%.2f\n",
                               empId[i],
                               empName[i],
                               salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("ID: %d\n", empId[i]);
                        printf("Name: %s\n", empName[i]);
                        printf("Salary: %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Employee not found.\n");
                }
                break;

            case 4:
                printf("Thank you for using Employee Management System!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}