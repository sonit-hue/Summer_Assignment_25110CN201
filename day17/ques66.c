#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j, k = 0, flag;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements: ");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements: ");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[k++] = a[i];

    for(i = 0; i < n2; i++)
    {
        flag = 0;

        for(j = 0; j < n1; j++)
        {
            if(b[i] == a[j])
                flag = 1;
        }

        if(flag == 0)
            c[k++] = b[i];
    }

    printf("Union: ");

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}