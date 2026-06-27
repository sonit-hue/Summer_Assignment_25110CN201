#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Quiz Application\n\n");

    printf("1. Which language is used for C programming?\n");
    printf("1. Python  2. C  3. Java  4. HTML\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\n2. How many bits in 1 byte?\n");
    printf("1. 4  2. 8  3. 16  4. 32\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\n3. Which is an array index start value in C?\n");
    printf("1. 0  2. 1  3. -1  4. 2\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nYour Score = %d/3", score);

    return 0;
}