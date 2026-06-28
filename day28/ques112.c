#include <stdio.h>

struct contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct contact c;

    printf("Enter contact name: ");
    scanf("%s", c.name);

    printf("Enter phone number: ");
    scanf("%s", c.phone);

    printf("\nContact Details\n");
    printf("Name = %s\n", c.name);
    printf("Phone = %s", c.phone);

    return 0;
}