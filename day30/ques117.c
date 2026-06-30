#include <stdio.h>

struct student
{
    int roll[100];
    char name[100][50];
    float marks[100];
};

int main()
{
    struct student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s.roll[i]);

        printf("Enter name: ");
        scanf("%s", s.name[i]);

        printf("Enter marks: ");
        scanf("%f", &s.marks[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll = %d", s.roll[i]);
        printf("\nName = %s", s.name[i]);
        printf("\nMarks = %.2f\n", s.marks[i]);
    }

    return 0;
}