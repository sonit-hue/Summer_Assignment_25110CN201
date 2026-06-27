#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, count = 0;

    srand(time(0));

    num = rand() % 100 + 1;

    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        count++;

        if(guess > num)
            printf("Too high\n");
        else if(guess < num)
            printf("Too low\n");
        else
            printf("Correct! Attempts = %d", count);

    } while(guess != num);

    return 0;
}