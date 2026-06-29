#include <stdio.h>

struct item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct item i;

    printf("Enter item id: ");
    scanf("%d",&i.id);

    printf("Enter item name: ");
    scanf("%s",i.name);

    printf("Enter quantity: ");
    scanf("%d",&i.quantity);

    printf("Enter price: ");
    scanf("%f",&i.price);

    printf("\nInventory Details\n");

    printf("ID = %d\n",i.id);
    printf("Name = %s\n",i.name);
    printf("Quantity = %d\n",i.quantity);
    printf("Total Cost = %.2f",i.quantity*i.price);

    return 0;
}