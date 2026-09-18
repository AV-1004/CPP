#include <stdio.h>

int main()
{
    int a[100], n, i, j, isPrime;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Prime numbers are: ");

    for(i = 0; i < n; i++)
    {
        if(a[i] < 2)
            continue;

        isPrime = 1;

        for(j = 2; j < a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
            printf("%d ", a[i]);
    }

    return 0;
}