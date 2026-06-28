#include <stdio.h>

struct book
{
    int id;
    char name[50];
    int issued;
};

int main()
{
    struct book b;

    printf("Enter book ID: ");
    scanf("%d", &b.id);

    printf("Enter book name: ");
    scanf("%s", b.name);

    b.issued = 0;

    printf("\nLibrary Record\n");
    printf("Book ID = %d\n", b.id);
    printf("Book Name = %s\n", b.name);
    printf("Status = Available");

    return 0;
}