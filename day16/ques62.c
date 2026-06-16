#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int count, maxCount = 0, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Maximum frequency element = %d", element);

    return 0;
}