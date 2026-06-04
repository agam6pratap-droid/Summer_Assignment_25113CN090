#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basic);

        emp[i].hra = 0.20 * emp[i].basic; 
        emp[i].da = 0.10 * emp[i].basic;  
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
    }

    printf("\n===== EMPLOYEE SALARY REPORT =====\n");
    printf("ID\tName\tBasic\tGross Salary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basic,
               emp[i].gross);
    }

    return 0;
}