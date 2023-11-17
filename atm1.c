#include <stdio.h>

int main() {
    int Pin = 1234;
    double accountBalance = 5000.0;

    int pin;
    int choice;
    double amount;

    while (1) {
        printf("Welcome to the Digi Cash\n");
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == Pin) {
            printf("ATM PIN is correct.\n");
            printf("Choose an operation:\n");
            printf("1. Balance Checking\t\t");
            printf("2. Cash Withdrawal\n");
            printf("3. Cash Deposition\t\t");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Your account balance: ₹%.2f\n", accountBalance);
                    break;
                case 2:
                    printf("Enter the amount to withdraw: ₹");
                    scanf("%lf", &amount);
                    if (amount > 0 && amount <= accountBalance) {
                        accountBalance -= amount;
                        printf("Cash withdrawn: ₹%.2f\n", amount);
                    } else {
                        printf("Invalid amount or insufficient balance.\n");
                    }
                    break;
                case 3:
                    printf("Enter the amount to deposit: ₹");
                    scanf("%lf", &amount);
                    if (amount > 0) {
                        accountBalance += amount;
                        printf("Cash deposited: ₹%.2f\n", amount);
                    } else {
                        printf("Invalid amount.\n");
                    }
                    break;
                case 4:
                    printf("Exiting the ATM. Thank you!\n");
                    return 0;
                default:
                    printf("Invalid choice. Please select a valid option.\n");
            }
        } else {
            printf("Incorrect ATM PIN. Please try again.\n");
        }
    }

    return 0;
}
