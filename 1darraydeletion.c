#include <stdio.h>

int main()
{
    int a[100], n, i, j, num, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to delete: ");
    scanf("%d", &num);

    // Search for the number
    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            pos = i;
            break;
        }
    }

    // Delete the number
    if(pos == -1)
    {
        printf("Number not found.");
    }
    else
    {
        for(j = pos; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }

        n--;

        printf("Resultant array:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}