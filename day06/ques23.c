#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        count += num % 2;
        num /= 2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}