#include <stdio.h>

int roll[100], count = 0;
char name[100][50];
float marks[100];

void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("Student record added successfully!\n");
}

void displayStudents() {
    int i;

    if(count == 0) {
        printf("No records found.\n");
        return;
    }

   
    printf("Roll No\tName\t\tMarks\n");
    

    for(i = 0; i < count; i++) {
        printf("%d\t%-15s%.2f\n",
               roll[i],
               name[i],
               marks[i]);
    }
}

void searchStudent() {
    int searchRoll, i, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < count; i++) {
        if(roll[i] == searchRoll) {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}

void calculateAverage() {
    int i;
    float sum = 0;

    if(count == 0) {
        printf("No records available.\n");
        return;
    }

    for(i = 0; i < count; i++) {
        sum += marks[i];
    }

    printf("Average Marks = %.2f\n", sum / count);
}

int main() {
    int choice;

    do {
       
        printf("    STUDENT MANAGEMENT SYSTEM\n");
       
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                calculateAverage();
                break;

            case 5:
                printf("Thank you for using the system!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}