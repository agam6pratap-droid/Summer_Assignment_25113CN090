#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int roll[n];
    char name[n][50];
    float marks[n];

    printf("\nEnter Student Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    
    printf("STUDENT RECORDS\n");
    printf("Roll No\tName\t\tMarks\n");
  

    for(i = 0; i < n; i++) {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}