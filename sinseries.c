#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    float x, sum = 0, term;
    long fact;

    printf("Enter x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int power = 2 * i + 1;

        fact = 1;
        for(j = 1; j <= power; j++)
        {
            fact = fact * j;
        }

        term = pow(x, power) / fact;

        if(i % 2 == 0)
            sum = sum + term;
        else
            sum = sum - term;
    }

    printf("sin(%f) = %f", x, sum);

    return 0;
}