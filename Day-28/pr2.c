#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount acc;
    int choice;
    float amount;

    printf("Create Bank Account\n");
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    acc.balance += amount;
                    printf("Deposit successful.\n");
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount > acc.balance) {
                    printf("Insufficient balance.\n");
                } else {
                    acc.balance -= amount;
                    printf("Withdrawal successful.\n");
                }
                break;

            case 3:
                printf("Current Balance: Rs. %.2f\n", acc.balance);
                break;

            case 4:
                printf("\nAccount Details\n");
                printf("Account Number : %d\n", acc.accNo);
                printf("Name           : %s\n", acc.name);
                printf("Balance        : Rs. %.2f\n", acc.balance);
                break;

            case 5:
                printf("Thank you for using the banking system.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 5);

    return 0;
}