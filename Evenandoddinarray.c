#include <stdio.h>

int main()
{
    int a[10], i;
    int even = 0, odd = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of even numbers = %d\n", even);
    printf("Number of odd numbers = %d\n", odd);

    return 0;
}