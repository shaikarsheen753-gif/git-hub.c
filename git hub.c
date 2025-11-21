#include <stdio.h>

int main() {
    float balance = 0.0;
    int choice;
    float amount;

    printf("Welcome to Simple Banking System (INR)\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money (Credit)\n");
        printf("3. Withdraw Money (Debit)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: ₹%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit (₹): ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully!\n");
                    printf("New balance: ₹%.2f\n", balance);
                } else {
                    printf("Invalid amount! Deposit must be positive.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw (₹): ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                    printf("New balance: ₹%.2f\n", balance);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid amount! Withdrawal must be positive.\n");
                }
                break;

            case 4:
                printf("Thank you for using our banking system.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}