#include <stdio.h>

struct book
{
    int id;
    char name[50];
};

int main()
{
    struct book b[100];
    int n, i, choice;

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter book id: ");
        scanf("%d",&b[i].id);

        printf("Enter book name: ");
        scanf("%s",b[i].name);
    }

    do
    {
        printf("\n1.Display Books");
        printf("\n2.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nID = %d",b[i].id);
                    printf("\nBook = %s\n",b[i].name);
                }
                break;

            case 2:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice!=2);

    return 0;
}