#include <stdio.h>

int main()
{
    int arr[100], n, i, j, sum, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
        printf("No pair found");

    return 0;
}