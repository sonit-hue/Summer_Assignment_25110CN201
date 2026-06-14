#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int max, second;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = second = -99999;

    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max)
        {
            second = arr[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}