#include <stdio.h>

int main()
{
    int n, i;
    float x, term, sum = 0;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;

    for(i = 1; i <= n; i++)
    {
        sum = sum + term;

        term = -term * x * x / ((2 * i) * (2 * i + 1));
    }

    printf("Sum = %f", sum);

    return 0;
}