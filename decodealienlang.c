#include <stdio.h>

int main()
{
    int num, digit, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;

        if (digit == 0)
        {
            printf("[silence]\n");
        }
        else
        {
            for (i = 1; i <= digit; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}