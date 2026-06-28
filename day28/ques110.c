#include <stdio.h>

struct account
{
    int accno;
    char name[50];
    float balance;
};

int main()
{
    struct account a;
    int choice;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &a.accno);

    printf("Enter name: ");
    scanf("%s", a.name);

    printf("Enter balance: ");
    scanf("%f", &a.balance);

    printf("\n1. Deposit\n2. Withdraw\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter amount: ");
        scanf("%f", &amount);

        a.balance += amount;
    }
    else if(choice == 2)
    {
        printf("Enter amount: ");
        scanf("%f", &amount);

        if(amount <= a.balance)
            a.balance -= amount;
        else
            printf("Insufficient balance");
    }

    printf("\nAccount Details\n");
    printf("Account No = %d\n", a.accno);
    printf("Name = %s\n", a.name);
    printf("Balance = %.2f", a.balance);

    return 0;
}