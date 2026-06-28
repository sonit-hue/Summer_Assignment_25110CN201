#include <stdio.h>

int main()
{
    char name[50];
    int tickets;
    float price = 200, total;

    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\nTicket Details\n");
    printf("Name = %s\n", name);
    printf("Tickets = %d\n", tickets);
    printf("Total Amount = %.2f", total);

    return 0;
}