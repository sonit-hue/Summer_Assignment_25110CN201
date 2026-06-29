#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i;

    printf("Enter string: ");
    gets(str);

    do
    {
        printf("\n1.Length");
        printf("\n2.Reverse");
        printf("\n3.Uppercase");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d",strlen(str));
                break;

            case 2:
                printf("Reverse = ");
                for(i=strlen(str)-1;i>=0;i--)
                    printf("%c",str[i]);
                break;

            case 3:
                for(i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='a' && str[i]<='z')
                        str[i]-=32;
                }
                printf("Uppercase = %s",str);
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice!=4);

    return 0;
}