#include <stdio.h>
#include <string.h>

char name[100][50];
int roll[100];
float marks[100];
int n = 0;

void addStudent()
{
    printf("Enter roll: ");
    scanf("%d",&roll[n]);

    printf("Enter name: ");
    scanf("%s",name[n]);

    printf("Enter marks: ");
    scanf("%f",&marks[n]);

    n++;

    printf("Student added successfully\n");
}

void display()
{
    int i;

    printf("\nStudent Records\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll = %d",roll[i]);
        printf("\nName = %s",name[i]);
        printf("\nMarks = %.2f\n",marks[i]);
    }
}

void search()
{
    int r, i;

    printf("Enter roll to search: ");
    scanf("%d",&r);

    for(i=0;i<n;i++)
    {
        if(roll[i]==r)
        {
            printf("Name = %s\n",name[i]);
            printf("Marks = %.2f",marks[i]);
            return;
        }
    }

    printf("Record not found");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Student Management System ---");
        printf("\n1.Add Student");
        printf("\n2.Display Students");
        printf("\n3.Search Student");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                printf("Thank You");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice!=4);

    return 0;
}